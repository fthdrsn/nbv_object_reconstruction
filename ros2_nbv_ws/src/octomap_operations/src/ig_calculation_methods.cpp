#include "octomap_operations.hpp"


namespace octomap_operations
{

/**
 * Calculates total entropy of the given view.
 *
 * @param pose_vec Rays are calculated  using this pose vector [x,y,z,w,qx,qy,qz].
 * @return Total entropy for the given view (pose)
 */
double OctomapOperations::get_view_ig_ent(std::vector<float>& pose_vec, std::shared_ptr<octomap::OcTree>& ot)
{
  // Extract position and quaternion
  Eigen::Vector3d camera_pos(pose_vec[0], pose_vec[1], pose_vec[2]);
  Eigen::Quaterniond q(pose_vec[3], pose_vec[4], pose_vec[5], pose_vec[6]);
  q.normalize();

  double view_entropy=0.0;
  double max_range=raycast_r_max_;
  octomap::KeyRay ray;
 
  for (int i = 0; i < static_cast<int>(unit_rays_normal_view.size()); ++i)
    {
        const auto& u = unit_rays_normal_view[i];
        // Rotate unit ray direction
        Eigen::Vector3d dir = q * Eigen::Vector3d(u.x(), u.y(), u.z());
        dir.normalize();

        octomap::point3d origin(camera_pos.x(), camera_pos.y(), camera_pos.z());
        octomap::point3d direction(dir.x(), dir.y(), dir.z());
        octomap::point3d end_point;
  
        bool found_endpoint = ot->castRay( origin, direction, end_point, true, max_range ); // ignore unknown cells
        //true if an occupied cell was hit, false if the maximum range or octree bounds are reached

        ray.reset();
        ot->computeRayKeys(origin, end_point, ray); //Compute octree keys for all traversed voxels (excluding the end_point)
        //Calculate the entropy of the ray
        for( octomap::KeyRay::iterator it = ray.begin() ; it!=ray.end(); ++it )
          {
          octomap::point3d coord = ot->keyToCoord(*it);
    
          if (!is_inside_boundaries(Eigen::Vector3d(coord.x(), coord.y(), coord.z())))
               continue;

          octomap::OcTreeNode* node =ot->search(*it);
          double prob_occupancy(0);
          if(!node){
            //Node is unknown
            prob_occupancy=0.5;
          }else{
            //Node is free or occupied, get probability
            prob_occupancy=node->getOccupancy();
          }
          view_entropy+=entropy(prob_occupancy);
          }

        //Finally, include th entropy of the end point
        // Check the end point
        octomap::OcTreeKey end_key;
        if(ot->coordToKeyChecked(end_point,end_key))
        {
          octomap::OcTreeNode* end_node =ot->search(end_key);
          double prob_occupancy(0);
          if(!end_node){
            //Node is unknown
            prob_occupancy=0.5;
          }else{
            //Node is free or occupied, get probability
            prob_occupancy=end_node->getOccupancy();
          }

          view_entropy+=entropy(prob_occupancy);
          
        }     


    }
    return view_entropy;

}


/**
 * Calculates the count of rear-side voxels of the given view.
 *
 * @param pose_vec Rays are calculated  using this pose vector [x,y,z,w,qx,qy,qz].
 * @return Count of rear-side voxels for the given view (pose)
 */


double OctomapOperations::get_view_ig_rsv(std::vector<float>& pose_vec, std::shared_ptr<octomap::OcTree>& ot)
{
  // Extract position and quaternion
  Eigen::Vector3d camera_pos(pose_vec[0], pose_vec[1], pose_vec[2]);
  Eigen::Quaterniond q(pose_vec[3], pose_vec[4], pose_vec[5], pose_vec[6]);
  q.normalize();

  double max_range=raycast_r_max_;
  double rear_side_voxel_count=0.0;
  octomap::KeyRay ray;
  
  for (int i = 0; i < static_cast<int>(unit_rays_normal_view.size()); ++i)
    {
      const auto& u = unit_rays_normal_view[i];
      // Rotate unit ray direction
      Eigen::Vector3d dir = q * Eigen::Vector3d(u.x(), u.y(), u.z());
      dir.normalize();

      octomap::point3d origin(camera_pos.x(), camera_pos.y(), camera_pos.z());
      octomap::point3d direction(dir.x(), dir.y(), dir.z());
      octomap::point3d end_point;
     
      bool found_endpoint = ot->castRay(origin, direction, end_point, true, max_range); // ignore unknown cells
      //true if an occupied cell was hit, false if the maximum range or octree bounds are reached
      if(!found_endpoint)
         continue; // No occupied voxel hit along this ray

      ray.reset();
      ot->computeRayKeys(origin, end_point, ray); //Compute octree keys for all traversed voxels (excluding the end_point)
      if (ray.size()<=1) //At least two voxels 
          continue; // No traversed voxels
 
      auto last_it = std::prev(ray.end());
      // Check if the voxel is inside boundaries
      octomap::point3d coord = ot->keyToCoord(*last_it);
      Eigen::Vector3d v(coord.x(), coord.y(), coord.z());
      if (!is_inside_boundaries(v))
        continue;
          
      octomap::OcTreeNode* prev_node = ot->search(*last_it);
      //search the previous voxel of the end point
      // Increase rear side voxel count if the voxel before the occupied voxel is unknown
      // So each ray can have one rearside voxel
      if (!prev_node)
      {
          rear_side_voxel_count++;
      }
    }
      
  return rear_side_voxel_count;
}
}
