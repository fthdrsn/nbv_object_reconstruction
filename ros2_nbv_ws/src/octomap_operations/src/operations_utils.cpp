#include "octomap_operations.hpp"
#include <algorithm>
#include <cmath>

namespace octomap_operations
{
void OctomapOperations::calculate_unit_ray_set(std::vector<Eigen::Vector3d>& unit_ray_set, double hfov, double vfov, double dphi, double dtheta)
{ 

  unit_ray_set.clear();
  int n_theta = (int)ceil(hfov / dtheta);
  int n_phi = (int)ceil(vfov / dphi);

  for (int i_theta = 0; i_theta < n_theta; ++i_theta)
  {
    for (int i_phi = 0; i_phi < n_phi; ++i_phi)
    {
      double theta = -hfov/2.0 + i_theta * dtheta;
      double phi = -vfov/2.0 + i_phi * dphi;
      
      double theta_rad = M_PI * theta / 180.0f;
      double sin_theta = sin(theta_rad), cos_theta = cos(theta_rad);
      
      double phi_rad = M_PI * phi / 180.0f;
      double sin_phi = sin(phi_rad), cos_phi = cos(phi_rad);
      
      Eigen::Vector3d vec;
      vec[0] = sin_theta * cos_phi;
      vec[1] = -cos_theta * sin_phi;
      vec[2] = cos_theta * cos_phi;
      
      unit_ray_set.push_back(vec);
    }
  }
}

/**
 * Check if the given point inside the boundaries
 *
 * @param point 3D point to check if it is inside boundaries.
 * @return True is the point is inside the boundaries.
 */
bool OctomapOperations::is_inside_boundaries(Eigen::Vector3d point)
{
  return point[0] > boundary_min_[0] and point[0] < boundary_max_[0] and
         point[1] > boundary_min_[1] and point[1] < boundary_max_[1] and
         point[2] > boundary_min_[2] and point[2] < boundary_max_[2];
}


/**
 * Calculates the entropy given a probability value (probability of being occupied).
 *
 * @param p Probability value (between 0 and 1).
 * @return Calculated entropy.
 */
double OctomapOperations::entropy(double p)
{
    constexpr double eps = 1e-6;
    p = std::min(1.0 - eps, std::max(eps, p));
    return -p * log(p) - (1.0 - p) * log(1.0 - p);
}

    
}