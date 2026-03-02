#include "octomap_operations.hpp"
#include <chrono>
#include <octomap_msgs/conversions.h>
#include <visualization_msgs/msg/marker_array.hpp>
#include <geometry_msgs/msg/point.hpp>


namespace octomap_operations
{

OctomapOperations::OctomapOperations()
    : Node("octomap_operations_node")
{
    // Load parameters from yaml
    loadParameters();

    // Create subscriber for main octomap
    octomap_sub_ = this->create_subscription<octomap_msgs::msg::Octomap>(
        octomap_topic_name_,
        10,
        std::bind(&OctomapOperations::octomapCallback, this, std::placeholders::_1));

    // Create service servers
    octomap_data_service = this->create_service<octomap_operations_interfaces::srv::OctomapData>(
      "octomap_data",
      std::bind(&OctomapOperations::get_octomap_data, this, std::placeholders::_1, std::placeholders::_2));
    focus_point_service = this->create_service<octomap_operations_interfaces::srv::FocusPoint>(
      "focus_point",
      std::bind(&OctomapOperations::calculate_focus_point, this, std::placeholders::_1, std::placeholders::_2));
    view_evaluate_service = this->create_service<octomap_operations_interfaces::srv::ViewEvaluate>(
      "view_evaluate",
      std::bind(&OctomapOperations::calculate_view_igs, this, std::placeholders::_1, std::placeholders::_2));
    stop_octomap_update_service = this->create_service<octomap_operations_interfaces::srv::StopOctomapUpdate>(
      "stop_octomap_update",
      std::bind(&OctomapOperations::stop_octomap_update, this, std::placeholders::_1, std::placeholders::_2));
    is_octomap_received=false;

    // Create publisher for focus point rays visualization
    focus_point_rays_pub_ = this->create_publisher<visualization_msgs::msg::MarkerArray>(
      "focus_point_rays", 10);

    calculate_unit_ray_set(unit_rays_normal_view, camera_horizontal_fov_, camera_vertical_fov_, raycast_dphi_, raycast_dtheta_);
    calculate_unit_ray_set(unit_rays_expanded_view, camera_horizontal_fov_expanded_, camera_vertical_fov_expanded_, raycast_dphi_, raycast_dtheta_);

    std::lock_guard<std::mutex> lock(octomap_mutex_);
    RCLCPP_INFO(this->get_logger(), "Subscribing to: %s", octomap_topic_name_.c_str());
    RCLCPP_INFO(this->get_logger(), "Octomap resolution: %.3f m", octomap_cell_size_);
    RCLCPP_INFO(this->get_logger(), "Camera FOV: H=%.1f° V=%.1f°", camera_horizontal_fov_, camera_vertical_fov_);
    RCLCPP_INFO(this->get_logger(), "Raycast r_max: %.2f m", raycast_r_max_);
    RCLCPP_INFO(this->get_logger(), "Boundary: [%.2f, %.2f, %.2f] to [%.2f, %.2f, %.2f]", 
                boundary_min_[0], boundary_min_[1], boundary_min_[2],
                boundary_max_[0], boundary_max_[1], boundary_max_[2]);
                
}

void OctomapOperations::loadParameters()
{
    // Declare and get camera parameters
    std::lock_guard<std::mutex> lock(octomap_mutex_);
    this->declare_parameter("camera.vertical_fov", 60.0);
    this->declare_parameter("camera.horizontal_fov", 74.0);
    this->declare_parameter("camera.horizontal_fov_expanded", 90.0);
    this->declare_parameter("camera.vertical_fov_expanded", 90.0);
    
    camera_horizontal_fov_ = this->get_parameter("camera.horizontal_fov").as_double();
    camera_vertical_fov_ = this->get_parameter("camera.vertical_fov").as_double();
    camera_horizontal_fov_expanded_ = this->get_parameter("camera.horizontal_fov_expanded").as_double();
    camera_vertical_fov_expanded_ = this->get_parameter("camera.vertical_fov_expanded").as_double();
    
    // Declare and get raycast parameters
    this->declare_parameter("raycast.dphi", 2.5);
    this->declare_parameter("raycast.dtheta", 2.5);
    this->declare_parameter("raycast.r_max", 4.5);
    
    raycast_dphi_ = this->get_parameter("raycast.dphi").as_double();
    raycast_dtheta_ = this->get_parameter("raycast.dtheta").as_double();
    raycast_r_max_ = this->get_parameter("raycast.r_max").as_double();
    
    // Declare and get octomap parameters
    this->declare_parameter("octomap.topic_name", "/octomap_full");
    this->declare_parameter("octomap.save_path", "/home/laptop13/ros2_tutorial_workspace/map_");
    this->declare_parameter("octomap.cell_size", 0.03);
    
    octomap_topic_name_ = this->get_parameter("octomap.topic_name").as_string();
    octomap_save_path_ = this->get_parameter("octomap.save_path").as_string();
    octomap_cell_size_ = this->get_parameter("octomap.cell_size").as_double();
    
    // Declare and get focus point parameters
    this->declare_parameter("focus_pnt.focus_r", 2.5);
    focus_pnt_focus_r_ = this->get_parameter("focus_pnt.focus_r").as_double();
    

    // Declare and get boundary parameters
    this->declare_parameter("boundary.min", std::vector<double>{-2.75, -2.75, 0.05});
    this->declare_parameter("boundary.max", std::vector<double>{2.75, 2.75, 4.0});
    
    boundary_min_ = this->get_parameter("boundary.min").as_double_array();
    boundary_max_ = this->get_parameter("boundary.max").as_double_array();
}

void OctomapOperations::octomapCallback(const octomap_msgs::msg::Octomap& msg)
{
    if (block_octomap_updates)
    {
        RCLCPP_INFO(this->get_logger(),"Octomap update blocked by user");
        return;
    }

    RCLCPP_INFO(this->get_logger(),"Received octomap message");
    octomap::AbstractOcTree* aot = octomap_msgs::msgToMap(msg);
    octomap::OcTree* ot = dynamic_cast<octomap::OcTree*>(aot);
    if (!ot)
    {
        RCLCPP_ERROR(this->get_logger(),"Received Octomap is not an OcTree");
        delete aot;
        return;
    }
    {
        std::lock_guard<std::mutex> lock(octomap_mutex_);
        ot_ = std::make_shared<octomap::OcTree>(*ot);
    }
    delete ot;
    is_octomap_received=true;
    RCLCPP_INFO(this->get_logger(),"Octomap updated");

}

void OctomapOperations::stop_octomap_update(
    const std::shared_ptr<octomap_operations_interfaces::srv::StopOctomapUpdate::Request> req,
    std::shared_ptr<octomap_operations_interfaces::srv::StopOctomapUpdate::Response> resp)
{
  block_octomap_updates = req->block_updates;
  if (block_octomap_updates) {
    RCLCPP_INFO(this->get_logger(), "Octomap updates have been blocked.");
  } else {
    RCLCPP_INFO(this->get_logger(), "Octomap updates have been unblocked.");
  }
  resp->success = true;
}
/* Low-resolution rebuild removed. Using separate coarse octomap subscription when enabled. */

/**
 * Service function to calculate the information gain (IG) for a list of views.
 * @param req Service request containing the list of views and IG method.
 * @param resp Service response containing the calculated IGs for each view.
 */
void OctomapOperations::calculate_view_igs(
    const std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate::Request> req,
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate::Response> resp)
 {
  if(is_octomap_received)
  {
    std::shared_ptr<octomap::OcTree> ot;
    {
            
        std::lock_guard<std::mutex> lock(octomap_mutex_);
        ot = ot_;
        
    }
    if (req->view_list.size() % 7 != 0)
    {
      RCLCPP_ERROR(this->get_logger(), "view_list size is not a multiple of 7");
      return;
    }

    const bool use_rsv = (req->ig_method == "RSV");
    const bool use_ent = (req->ig_method == "ENT");

    if (!use_rsv && !use_ent)
    {
      RCLCPP_ERROR(this->get_logger(), "Invalid IG method: %s", req->ig_method.c_str());
      return;
    }

    std::vector<float> resultVec;
    int num_poses = req->view_list.size() / 7;
    resultVec.resize(num_poses);

   
    auto begin_total = std::chrono::steady_clock::now();

  
    for (int pose_idx = 0; pose_idx < num_poses; ++pose_idx)
    {
        std::vector<float> pose(req->view_list.begin() + pose_idx * 7,
              req->view_list.begin() + pose_idx * 7 + 7);

         double ig = use_rsv
             ? get_view_ig_rsv(pose, ot)
             : get_view_ig_ent(pose, ot);
      
        resultVec[pose_idx] = ig;
    }  
     
    auto end_total = std::chrono::steady_clock::now();
    double totalTimeMs = std::chrono::duration_cast<std::chrono::milliseconds>(end_total - begin_total).count();

    RCLCPP_INFO(this->get_logger(),
          "Total IG computation time: %.2f ms for %d poses (avg: %.2f ms/pose)",
          totalTimeMs, num_poses, totalTimeMs / num_poses);

    resp->view_igs = std::move(resultVec);
    resp->elapsed_time = totalTimeMs;
    return;
 }
 else
 {
    RCLCPP_WARN(this->get_logger(), "Octomap is not received");
    resp->view_igs = {};
    return;
 
 }
  
 }
/**
 * It is service function which calculates the focus point.
 *
 * @param req Service request.
 * @param resp Service response.
 */

void OctomapOperations::calculate_focus_point(
    const std::shared_ptr<octomap_operations_interfaces::srv::FocusPoint::Request> req,
    std::shared_ptr<octomap_operations_interfaces::srv::FocusPoint::Response> resp)
{
  if(is_octomap_received)
  {
  std::shared_ptr<octomap::OcTree> ot;
  {
        
    std::lock_guard<std::mutex> lock(octomap_mutex_);
    ot = ot_;
        
  }
  RCLCPP_INFO(this->get_logger(), "Start focus point calculation");
  std::vector<float> req_vec = req->pose;

  std::vector<float> tmp_vec;
  std::vector<float> result_vec;
  Eigen::Vector3d focus_pnt;

  auto begin_focus_calculation= std::chrono::steady_clock::now();

  focus_pnt = get_focus_point(req_vec, ot);

  auto end_focus_calculation= std::chrono::steady_clock::now();
  double totalTimeMs = std::chrono::duration_cast<std::chrono::milliseconds>(end_focus_calculation - begin_focus_calculation).count();
  RCLCPP_INFO(this->get_logger(), "Focus point calculation time: %.2f ms", totalTimeMs);
  resp->elapsed_time = totalTimeMs;
  result_vec.push_back(focus_pnt[0]);
  result_vec.push_back(focus_pnt[1]);
  result_vec.push_back(focus_pnt[2]);
  resp->focus_pnt = result_vec;
  
  // Publish rays for visualization
  publish_focus_point_rays(req_vec, focus_pnt);
 
 }else
 {
    resp->focus_pnt = {};
 }
  
  return;
}

void OctomapOperations::get_octomap_data(
    const std::shared_ptr<octomap_operations_interfaces::srv::OctomapData::Request> /*req*/,
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData::Response> resp)
{
  if (!is_octomap_received)
  { resp->cvr=-1;
    resp->ent=-1;
    resp->unknown=-1;
    resp->occupied=-1;
    resp->free=-1;
    RCLCPP_WARN(this->get_logger(), "Octomap is not received yet");
    return;
  }

  std::shared_ptr<octomap::OcTree> ot;
  {
        std::lock_guard<std::mutex> lock(octomap_mutex_);
        ot = ot_;
  }
  float x_max(boundary_max_[0]);
  float x_min(boundary_min_[0]);
  float y_max(boundary_max_[1]);
  float y_min(boundary_min_[1]);
  float z_max(boundary_max_[2]);
  float z_min(boundary_min_[2]);
  float occupied(0);
  float free(0);
  float unknown(0);
  float ent(0);
  float cov(0);
  double res = octomap_cell_size_;
  double dV = res*res*res;
  double prob_occ;
  double comp_prob;
  double curr_ent(0);
  for (float x=x_min;x<x_max;x=x+res)
    for (float y=y_min;y<y_max;y=y+res)
      for (float z=z_min;z<z_max;z=z+res)
      {
          Eigen::Vector3d v(x, y, z);
          if (!is_inside_boundaries(v))
               continue;
          octomap::OcTreeNode* result = ot->search(x+res/2,y+res/2,z+res/2);
          
          if (result)
          { 
          cov+=dV; //Coverage free+occupied volumes
          prob_occ=result->getOccupancy(); //Probability of the voxel being occupied
          comp_prob=1-prob_occ; //Complement probability ( the voxel being free)
          curr_ent=entropy(prob_occ);

          if(result->getLogOdds() > 0)
             occupied+=1;
          else
             free+=1;
       
          }
          else
          {
          unknown+=1;
          // If the voxel is unknown, probability is 0.5
          curr_ent=entropy(0.5);
         }

          ent+=curr_ent;
      }
 resp->cvr=cov;
 resp->ent=ent;
 resp->unknown=unknown;
 resp->occupied=occupied;
 resp->free=free;
 return;

}

void OctomapOperations::publish_focus_point_rays(
    const std::vector<float>& pose_vec,
    const Eigen::Vector3d& focus_pnt)
{
  // Extract camera pose: [x, y, z, qw, qx, qy, qz]
  if (pose_vec.size() < 7)
  {
    RCLCPP_WARN(this->get_logger(), "Invalid pose vector size for ray visualization");
    return;
  }
  
  Eigen::Vector3d cam_pos(pose_vec[0], pose_vec[1], pose_vec[2]);
  Eigen::Quaterniond cam_quat(pose_vec[3], pose_vec[4], pose_vec[5], pose_vec[6]); // qw, qx, qy, qz
  Eigen::Matrix3d cam_rotation = cam_quat.toRotationMatrix();
  
  visualization_msgs::msg::MarkerArray marker_array;
  
  // Use normal view rays for visualization
  const std::vector<Eigen::Vector3d>& rays = unit_rays_expanded_view;
  
  // Create line markers for a subset of rays (every nth ray to avoid clutter)
  int ray_stride = std::max(1, static_cast<int>(rays.size() / 100)); // Show max 50 rays
  int marker_id = 0;
  
  for (size_t i = 0; i < rays.size(); i += ray_stride)
  {
    // Transform ray from camera frame to world frame
    Eigen::Vector3d ray_world = cam_rotation * rays[i];
    ray_world.normalize();
    
    // Ray endpoint at max distance
    Eigen::Vector3d ray_end = cam_pos + ray_world * raycast_r_max_;
    
    // Create line marker
    visualization_msgs::msg::Marker marker;
    marker.header.frame_id = "world";
    marker.header.stamp = this->get_clock()->now();
    marker.id = marker_id++;
    marker.type = visualization_msgs::msg::Marker::LINE_STRIP;
    marker.action = visualization_msgs::msg::Marker::ADD;
    marker.scale.x = 0.02; // Line width
    
    // Set color: green for regular rays
    marker.color.r = 0.2;
    marker.color.g = 0.7;
    marker.color.b = 1.0;
    marker.color.a = 0.7;
    
    // Add points to line
    geometry_msgs::msg::Point p1, p2;
    p1.x = cam_pos.x();
    p1.y = cam_pos.y();
    p1.z = cam_pos.z();
    p2.x = ray_end.x();
    p2.y = ray_end.y();
    p2.z = ray_end.z();
    marker.points.push_back(p1);
    marker.points.push_back(p2);
    
    marker_array.markers.push_back(marker);
  }
  
  // Add a special marker for the focus point - larger sphere
  visualization_msgs::msg::Marker focus_marker;
  focus_marker.header.frame_id = "world";
  focus_marker.header.stamp = this->get_clock()->now();
  focus_marker.id = marker_id++;
  focus_marker.type = visualization_msgs::msg::Marker::SPHERE;
  focus_marker.action = visualization_msgs::msg::Marker::ADD;
  focus_marker.pose.position.x = focus_pnt.x();
  focus_marker.pose.position.y = focus_pnt.y();
  focus_marker.pose.position.z = focus_pnt.z();
  focus_marker.pose.orientation.w = 1.0;
  focus_marker.scale.x = 0.1;
  focus_marker.scale.y = 0.1;
  focus_marker.scale.z = 0.1;
  focus_marker.color.r = 1.0;
  focus_marker.color.g = 0.0;
  focus_marker.color.b = 0.0;
  focus_marker.color.a = 0.9;
  
  marker_array.markers.push_back(focus_marker);
  
  // Add camera position marker - blue sphere
  visualization_msgs::msg::Marker camera_marker;
  camera_marker.header.frame_id = "world";
  camera_marker.header.stamp = this->get_clock()->now();
  camera_marker.id = marker_id++;
  camera_marker.type = visualization_msgs::msg::Marker::SPHERE;
  camera_marker.action = visualization_msgs::msg::Marker::ADD;
  camera_marker.pose.position.x = cam_pos.x();
  camera_marker.pose.position.y = cam_pos.y();
  camera_marker.pose.position.z = cam_pos.z();
  camera_marker.pose.orientation.w = 1.0;
  camera_marker.scale.x = 0.08;
  camera_marker.scale.y = 0.08;
  camera_marker.scale.z = 0.08;
  camera_marker.color.r = 0.0;
  camera_marker.color.g = 0.0;
  camera_marker.color.b = 1.0;
  camera_marker.color.a = 0.9;
  
  marker_array.markers.push_back(camera_marker);
  
  // Publish the marker array
  focus_point_rays_pub_->publish(marker_array);
  RCLCPP_DEBUG(this->get_logger(), "Published %zu markers for focus point rays visualization", marker_array.markers.size());
}

} // namespace octomap_operations

