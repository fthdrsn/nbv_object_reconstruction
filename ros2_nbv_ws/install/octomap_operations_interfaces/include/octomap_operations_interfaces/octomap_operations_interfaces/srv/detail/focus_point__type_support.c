// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from octomap_operations_interfaces:srv/FocusPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "octomap_operations_interfaces/srv/detail/focus_point__rosidl_typesupport_introspection_c.h"
#include "octomap_operations_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"
#include "octomap_operations_interfaces/srv/detail/focus_point__struct.h"


// Include directives for member types
// Member `pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  octomap_operations_interfaces__srv__FocusPoint_Request__init(message_memory);
}

void octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_fini_function(void * message_memory)
{
  octomap_operations_interfaces__srv__FocusPoint_Request__fini(message_memory);
}

size_t octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__size_function__FocusPoint_Request__pose(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Request__pose(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__get_function__FocusPoint_Request__pose(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Request__pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Request__pose(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Request__pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__get_function__FocusPoint_Request__pose(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Request__pose(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Request, pose),  // bytes offset in struct
    NULL,  // default value
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__size_function__FocusPoint_Request__pose,  // size() function pointer
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Request__pose,  // get_const(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__get_function__FocusPoint_Request__pose,  // get(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Request__pose,  // fetch(index, &value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Request__pose,  // assign(index, value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Request__pose  // resize(index) function pointer
  },
  {
    "run_parallel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Request, run_parallel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_members = {
  "octomap_operations_interfaces__srv",  // message namespace
  "FocusPoint_Request",  // message name
  2,  // number of fields
  sizeof(octomap_operations_interfaces__srv__FocusPoint_Request),
  false,  // has_any_key_member_
  octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_member_array,  // message members
  octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_type_support_handle = {
  0,
  &octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_members,
  get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Request__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_octomap_operations_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Request)() {
  if (!octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_type_support_handle.typesupport_identifier) {
    octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "octomap_operations_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__struct.h"


// Include directives for member types
// Member `focus_pnt`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  octomap_operations_interfaces__srv__FocusPoint_Response__init(message_memory);
}

void octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_fini_function(void * message_memory)
{
  octomap_operations_interfaces__srv__FocusPoint_Response__fini(message_memory);
}

size_t octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__size_function__FocusPoint_Response__focus_pnt(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Response__focus_pnt(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__get_function__FocusPoint_Response__focus_pnt(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Response__focus_pnt(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Response__focus_pnt(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Response__focus_pnt(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__get_function__FocusPoint_Response__focus_pnt(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Response__focus_pnt(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_member_array[2] = {
  {
    "focus_pnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Response, focus_pnt),  // bytes offset in struct
    NULL,  // default value
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__size_function__FocusPoint_Response__focus_pnt,  // size() function pointer
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Response__focus_pnt,  // get_const(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__get_function__FocusPoint_Response__focus_pnt,  // get(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Response__focus_pnt,  // fetch(index, &value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Response__focus_pnt,  // assign(index, value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Response__focus_pnt  // resize(index) function pointer
  },
  {
    "elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Response, elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_members = {
  "octomap_operations_interfaces__srv",  // message namespace
  "FocusPoint_Response",  // message name
  2,  // number of fields
  sizeof(octomap_operations_interfaces__srv__FocusPoint_Response),
  false,  // has_any_key_member_
  octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_member_array,  // message members
  octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle = {
  0,
  &octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_members,
  get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Response__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_octomap_operations_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Response)() {
  if (!octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle.typesupport_identifier) {
    octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "octomap_operations_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "octomap_operations_interfaces/srv/focus_point.h"
// Member `request`
// Member `response`
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  octomap_operations_interfaces__srv__FocusPoint_Event__init(message_memory);
}

void octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_fini_function(void * message_memory)
{
  octomap_operations_interfaces__srv__FocusPoint_Event__fini(message_memory);
}

size_t octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__size_function__FocusPoint_Event__request(
  const void * untyped_member)
{
  const octomap_operations_interfaces__srv__FocusPoint_Request__Sequence * member =
    (const octomap_operations_interfaces__srv__FocusPoint_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Event__request(
  const void * untyped_member, size_t index)
{
  const octomap_operations_interfaces__srv__FocusPoint_Request__Sequence * member =
    (const octomap_operations_interfaces__srv__FocusPoint_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_function__FocusPoint_Event__request(
  void * untyped_member, size_t index)
{
  octomap_operations_interfaces__srv__FocusPoint_Request__Sequence * member =
    (octomap_operations_interfaces__srv__FocusPoint_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const octomap_operations_interfaces__srv__FocusPoint_Request * item =
    ((const octomap_operations_interfaces__srv__FocusPoint_Request *)
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Event__request(untyped_member, index));
  octomap_operations_interfaces__srv__FocusPoint_Request * value =
    (octomap_operations_interfaces__srv__FocusPoint_Request *)(untyped_value);
  *value = *item;
}

void octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  octomap_operations_interfaces__srv__FocusPoint_Request * item =
    ((octomap_operations_interfaces__srv__FocusPoint_Request *)
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_function__FocusPoint_Event__request(untyped_member, index));
  const octomap_operations_interfaces__srv__FocusPoint_Request * value =
    (const octomap_operations_interfaces__srv__FocusPoint_Request *)(untyped_value);
  *item = *value;
}

bool octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Event__request(
  void * untyped_member, size_t size)
{
  octomap_operations_interfaces__srv__FocusPoint_Request__Sequence * member =
    (octomap_operations_interfaces__srv__FocusPoint_Request__Sequence *)(untyped_member);
  octomap_operations_interfaces__srv__FocusPoint_Request__Sequence__fini(member);
  return octomap_operations_interfaces__srv__FocusPoint_Request__Sequence__init(member, size);
}

size_t octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__size_function__FocusPoint_Event__response(
  const void * untyped_member)
{
  const octomap_operations_interfaces__srv__FocusPoint_Response__Sequence * member =
    (const octomap_operations_interfaces__srv__FocusPoint_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Event__response(
  const void * untyped_member, size_t index)
{
  const octomap_operations_interfaces__srv__FocusPoint_Response__Sequence * member =
    (const octomap_operations_interfaces__srv__FocusPoint_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_function__FocusPoint_Event__response(
  void * untyped_member, size_t index)
{
  octomap_operations_interfaces__srv__FocusPoint_Response__Sequence * member =
    (octomap_operations_interfaces__srv__FocusPoint_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const octomap_operations_interfaces__srv__FocusPoint_Response * item =
    ((const octomap_operations_interfaces__srv__FocusPoint_Response *)
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Event__response(untyped_member, index));
  octomap_operations_interfaces__srv__FocusPoint_Response * value =
    (octomap_operations_interfaces__srv__FocusPoint_Response *)(untyped_value);
  *value = *item;
}

void octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  octomap_operations_interfaces__srv__FocusPoint_Response * item =
    ((octomap_operations_interfaces__srv__FocusPoint_Response *)
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_function__FocusPoint_Event__response(untyped_member, index));
  const octomap_operations_interfaces__srv__FocusPoint_Response * value =
    (const octomap_operations_interfaces__srv__FocusPoint_Response *)(untyped_value);
  *item = *value;
}

bool octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Event__response(
  void * untyped_member, size_t size)
{
  octomap_operations_interfaces__srv__FocusPoint_Response__Sequence * member =
    (octomap_operations_interfaces__srv__FocusPoint_Response__Sequence *)(untyped_member);
  octomap_operations_interfaces__srv__FocusPoint_Response__Sequence__fini(member);
  return octomap_operations_interfaces__srv__FocusPoint_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Event, request),  // bytes offset in struct
    NULL,  // default value
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__size_function__FocusPoint_Event__request,  // size() function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Event__request,  // get_const(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_function__FocusPoint_Event__request,  // get(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Event__request,  // fetch(index, &value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Event__request,  // assign(index, value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(octomap_operations_interfaces__srv__FocusPoint_Event, response),  // bytes offset in struct
    NULL,  // default value
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__size_function__FocusPoint_Event__response,  // size() function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_const_function__FocusPoint_Event__response,  // get_const(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__get_function__FocusPoint_Event__response,  // get(index) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__fetch_function__FocusPoint_Event__response,  // fetch(index, &value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__assign_function__FocusPoint_Event__response,  // assign(index, value) function pointer
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__resize_function__FocusPoint_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_members = {
  "octomap_operations_interfaces__srv",  // message namespace
  "FocusPoint_Event",  // message name
  3,  // number of fields
  sizeof(octomap_operations_interfaces__srv__FocusPoint_Event),
  false,  // has_any_key_member_
  octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_member_array,  // message members
  octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_type_support_handle = {
  0,
  &octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_members,
  get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Event__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_octomap_operations_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Event)() {
  octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Request)();
  octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Response)();
  if (!octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_type_support_handle.typesupport_identifier) {
    octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_members = {
  "octomap_operations_interfaces__srv",  // service namespace
  "FocusPoint",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_Request_message_type_support_handle,
  NULL,  // response message
  // octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle
  NULL  // event_message
  // octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle
};


static rosidl_service_type_support_t octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_type_support_handle = {
  0,
  &octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_members,
  get_service_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Request__rosidl_typesupport_introspection_c__FocusPoint_Request_message_type_support_handle,
  &octomap_operations_interfaces__srv__FocusPoint_Response__rosidl_typesupport_introspection_c__FocusPoint_Response_message_type_support_handle,
  &octomap_operations_interfaces__srv__FocusPoint_Event__rosidl_typesupport_introspection_c__FocusPoint_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    octomap_operations_interfaces,
    srv,
    FocusPoint
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    octomap_operations_interfaces,
    srv,
    FocusPoint
  ),
  &octomap_operations_interfaces__srv__FocusPoint__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_octomap_operations_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint)(void) {
  if (!octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_type_support_handle.typesupport_identifier) {
    octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Event)()->data;
  }

  return &octomap_operations_interfaces__srv__detail__focus_point__rosidl_typesupport_introspection_c__FocusPoint_service_type_support_handle;
}
