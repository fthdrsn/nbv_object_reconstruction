// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from octomap_operations_interfaces:srv/StopOctomapUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/stop_octomap_update.h"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__STOP_OCTOMAP_UPDATE__STRUCT_H_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__STOP_OCTOMAP_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StopOctomapUpdate in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__StopOctomapUpdate_Request
{
  bool block_updates;
} octomap_operations_interfaces__srv__StopOctomapUpdate_Request;

// Struct for a sequence of octomap_operations_interfaces__srv__StopOctomapUpdate_Request.
typedef struct octomap_operations_interfaces__srv__StopOctomapUpdate_Request__Sequence
{
  octomap_operations_interfaces__srv__StopOctomapUpdate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__StopOctomapUpdate_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/StopOctomapUpdate in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__StopOctomapUpdate_Response
{
  bool success;
} octomap_operations_interfaces__srv__StopOctomapUpdate_Response;

// Struct for a sequence of octomap_operations_interfaces__srv__StopOctomapUpdate_Response.
typedef struct octomap_operations_interfaces__srv__StopOctomapUpdate_Response__Sequence
{
  octomap_operations_interfaces__srv__StopOctomapUpdate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__StopOctomapUpdate_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  octomap_operations_interfaces__srv__StopOctomapUpdate_Event__request__MAX_SIZE = 1
};
// response
enum
{
  octomap_operations_interfaces__srv__StopOctomapUpdate_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/StopOctomapUpdate in the package octomap_operations_interfaces.
typedef struct octomap_operations_interfaces__srv__StopOctomapUpdate_Event
{
  service_msgs__msg__ServiceEventInfo info;
  octomap_operations_interfaces__srv__StopOctomapUpdate_Request__Sequence request;
  octomap_operations_interfaces__srv__StopOctomapUpdate_Response__Sequence response;
} octomap_operations_interfaces__srv__StopOctomapUpdate_Event;

// Struct for a sequence of octomap_operations_interfaces__srv__StopOctomapUpdate_Event.
typedef struct octomap_operations_interfaces__srv__StopOctomapUpdate_Event__Sequence
{
  octomap_operations_interfaces__srv__StopOctomapUpdate_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_operations_interfaces__srv__StopOctomapUpdate_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__STOP_OCTOMAP_UPDATE__STRUCT_H_
