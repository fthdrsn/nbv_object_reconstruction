#ifndef OCTOMAP_OPERATIONS_HPP
#define OCTOMAP_OPERATIONS_HPP

#include <rclcpp/rclcpp.hpp>
#include <octomap_msgs/msg/octomap.hpp>
#include <octomap/OcTree.h>
#include <memory>
#include <vector>
#include <mutex>
#include <atomic>
#include <Eigen/Geometry>
// Include service definitions
#include "octomap_operations_interfaces/srv/octomap_data.hpp"
#include "octomap_operations_interfaces/srv/focus_point.hpp"
#include "octomap_operations_interfaces/srv/view_evaluate.hpp"
#include "octomap_operations_interfaces/srv/stop_octomap_update.hpp"
#include <visualization_msgs/msg/marker_array.hpp>
namespace octomap_operations
{

class OctomapOperations : public rclcpp::Node
{
public:
    OctomapOperations();
    ~OctomapOperations() = default;

private:
    // Octomap data handling
    void octomapCallback(const octomap_msgs::msg::Octomap& msg);
    std::mutex octomap_mutex_; // Mutex for thread safety when accessing octomap data
    std::atomic<bool> is_octomap_received{false};
    std::atomic<bool> block_octomap_updates{false};
    std::shared_ptr<octomap::OcTree> ot_;
    rclcpp::Subscription<octomap_msgs::msg::Octomap>::SharedPtr octomap_sub_;
    
    // Load parameters from yaml
    void loadParameters();
    // Calculate unit ray set based on camera FOV and raycast resolution w.r.t camera frame (assume camera frame: z-forward, y-up, x-left)
    void calculate_unit_ray_set(std::vector<Eigen::Vector3d>& unit_ray_set, double hfov, double vfov, double dphi, double dtheta);
    // Check if the given point inside the boundaries
    bool is_inside_boundaries(Eigen::Vector3d point);
    // Calculate entropy for occupancy probability
    double entropy(double p);

    // Service callbacks
    void get_octomap_data(
        const std::shared_ptr<octomap_operations_interfaces::srv::OctomapData::Request> req,
        std::shared_ptr<octomap_operations_interfaces::srv::OctomapData::Response> resp);
    void stop_octomap_update(
        const std::shared_ptr<octomap_operations_interfaces::srv::StopOctomapUpdate::Request> req,
        std::shared_ptr<octomap_operations_interfaces::srv::StopOctomapUpdate::Response> resp);
    void calculate_view_igs(
        const std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate::Request> req,
        std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate::Response> resp);
    void calculate_focus_point(
        const std::shared_ptr<octomap_operations_interfaces::srv::FocusPoint::Request> req,
        std::shared_ptr<octomap_operations_interfaces::srv::FocusPoint::Response> resp);

    // Core functionalities
    // Information Gain based on entropy
    double get_view_ig_ent(std::vector<float>& pose_vec, std::shared_ptr<octomap::OcTree>& ot); 
    // Information Gain based on rear-side-voxel count
    double get_view_ig_rsv(std::vector<float>& pose_vec, std::shared_ptr<octomap::OcTree>& ot); 
    // Calculate a focus point from the given view. Focus point is the point along the ray with maximum entropy.
    Eigen::Vector3d get_focus_point(std::vector<float>& pose_vec, std::shared_ptr<octomap::OcTree>& ot);
    // Publish rays used for focus point calculation for RViz visualization
    void publish_focus_point_rays(const std::vector<float>& pose_vec, const Eigen::Vector3d& focus_pnt);


    //Define service servers
    rclcpp::Service<octomap_operations_interfaces::srv::OctomapData>::SharedPtr octomap_data_service;
    rclcpp::Service<octomap_operations_interfaces::srv::FocusPoint>::SharedPtr focus_point_service;
    rclcpp::Service<octomap_operations_interfaces::srv::ViewEvaluate>::SharedPtr view_evaluate_service;
    rclcpp::Service<octomap_operations_interfaces::srv::StopOctomapUpdate>::SharedPtr stop_octomap_update_service;

    // Publishers for visualization
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr focus_point_rays_pub_;


   
    // Parameters - Camera
    double camera_horizontal_fov_;
    double camera_vertical_fov_;
    double camera_horizontal_fov_expanded_;
    double camera_vertical_fov_expanded_;
    
    // Parameters - Raycast
    double raycast_dphi_;
    double raycast_dtheta_;
    double raycast_r_max_;
  
    // Parameters - Octomap
    std::string octomap_topic_name_;
    std::string octomap_save_path_;
    double octomap_cell_size_;
    
    // Parameters - Focus point
    double focus_pnt_focus_r_;

    // Parameters - Boundary
    std::vector<double> boundary_min_;
    std::vector<double> boundary_max_;

    // Precomputed ray sets
    std::vector<Eigen::Vector3d> unit_rays_normal_view;
    std::vector<Eigen::Vector3d> unit_rays_expanded_view;

    int counter{0};
};

} // namespace octomap_operations

#endif // OCTOMAP_OPERATIONS_HPP
