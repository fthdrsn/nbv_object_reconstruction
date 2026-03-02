// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from octomap_operations_interfaces:srv/ViewEvaluate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/view_evaluate.h"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__STRUCT_H_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ig_method'
#include "rosidl_runtime_c/string.h"
// Member 'view_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ViewEvaluate in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__ViewEvaluate_Request
{
  rosidl_runtime_c__String ig_method;
  rosidl_runtime_c__float__Sequence view_list;
  bool run_parallel;
} octomap_operations_interfaces__srv__ViewEvaluate_Request;

// Struct for a sequence of octomap_operations_interfaces__srv__ViewEvaluate_Request.
typedef struct octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence
{
  octomap_operations_interfaces__srv__ViewEvaluate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'view_igs'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ViewEvaluate in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__ViewEvaluate_Response
{
  rosidl_runtime_c__float__Sequence view_igs;
  float elapsed_time;
} octomap_operations_interfaces__srv__ViewEvaluate_Response;

// Struct for a sequence of octomap_operations_interfaces__srv__ViewEvaluate_Response.
typedef struct octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence
{
  octomap_operations_interfaces__srv__ViewEvaluate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  octomap_operations_interfaces__srv__ViewEvaluate_Event__request__MAX_SIZE = 1
};
// response
enum
{
  octomap_operations_interfaces__srv__ViewEvaluate_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ViewEvaluate in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__ViewEvaluate_Event
{
  service_msgs__msg__ServiceEventInfo info;
  octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence request;
  octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence response;
} octomap_operations_interfaces__srv__ViewEvaluate_Event;

// Struct for a sequence of octomap_operations_interfaces__srv__ViewEvaluate_Event.
typedef struct octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence
{
  octomap_operations_interfaces__srv__ViewEvaluate_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__STRUCT_H_
