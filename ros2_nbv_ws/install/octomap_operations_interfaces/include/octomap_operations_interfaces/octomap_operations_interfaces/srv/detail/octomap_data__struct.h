// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from octomap_operations_interfaces:srv/OctomapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/octomap_data.h"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__STRUCT_H_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/OctomapData in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__OctomapData_Request
{
  uint8_t structure_needs_at_least_one_member;
} octomap_operations_interfaces__srv__OctomapData_Request;

// Struct for a sequence of octomap_operations_interfaces__srv__OctomapData_Request.
typedef struct octomap_operations_interfaces__srv__OctomapData_Request__Sequence
{
  octomap_operations_interfaces__srv__OctomapData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__OctomapData_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/OctomapData in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__OctomapData_Response
{
  float cvr;
  float ent;
  float unknown;
  float occupied;
  float free;
} octomap_operations_interfaces__srv__OctomapData_Response;

// Struct for a sequence of octomap_operations_interfaces__srv__OctomapData_Response.
typedef struct octomap_operations_interfaces__srv__OctomapData_Response__Sequence
{
  octomap_operations_interfaces__srv__OctomapData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__OctomapData_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  octomap_operations_interfaces__srv__OctomapData_Event__request__MAX_SIZE = 1
};
// response
enum
{
  octomap_operations_interfaces__srv__OctomapData_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/OctomapData in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__OctomapData_Event
{
  service_msgs__msg__ServiceEventInfo info;
  octomap_operations_interfaces__srv__OctomapData_Request__Sequence request;
  octomap_operations_interfaces__srv__OctomapData_Response__Sequence response;
} octomap_operations_interfaces__srv__OctomapData_Event;

// Struct for a sequence of octomap_operations_interfaces__srv__OctomapData_Event.
typedef struct octomap_operations_interfaces__srv__OctomapData_Event__Sequence
{
  octomap_operations_interfaces__srv__OctomapData_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__OctomapData_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__STRUCT_H_
