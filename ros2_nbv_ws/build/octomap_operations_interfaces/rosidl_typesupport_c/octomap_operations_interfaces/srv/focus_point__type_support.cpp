// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from octomap_operations_interfaces:srv/FocusPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "octomap_operations_interfaces/srv/detail/focus_point__struct.h"
#include "octomap_operations_interfaces/srv/detail/focus_point__type_support.h"
#include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FocusPoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FocusPoint_Request_type_support_ids_t;

static const _FocusPoint_Request_type_support_ids_t _FocusPoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FocusPoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FocusPoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FocusPoint_Request_type_support_symbol_names_t _FocusPoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, FocusPoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Request)),
  }
};

typedef struct _FocusPoint_Request_type_support_data_t
{
  void * data[2];
} _FocusPoint_Request_type_support_data_t;

static _FocusPoint_Request_type_support_data_t _FocusPoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FocusPoint_Request_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_FocusPoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FocusPoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FocusPoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FocusPoint_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FocusPoint_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Request__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, FocusPoint_Request)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::FocusPoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__type_support.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FocusPoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FocusPoint_Response_type_support_ids_t;

static const _FocusPoint_Response_type_support_ids_t _FocusPoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FocusPoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FocusPoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FocusPoint_Response_type_support_symbol_names_t _FocusPoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, FocusPoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Response)),
  }
};

typedef struct _FocusPoint_Response_type_support_data_t
{
  void * data[2];
} _FocusPoint_Response_type_support_data_t;

static _FocusPoint_Response_type_support_data_t _FocusPoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FocusPoint_Response_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_FocusPoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FocusPoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FocusPoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FocusPoint_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FocusPoint_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Response__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, FocusPoint_Response)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::FocusPoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__type_support.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FocusPoint_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FocusPoint_Event_type_support_ids_t;

static const _FocusPoint_Event_type_support_ids_t _FocusPoint_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FocusPoint_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FocusPoint_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FocusPoint_Event_type_support_symbol_names_t _FocusPoint_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, FocusPoint_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint_Event)),
  }
};

typedef struct _FocusPoint_Event_type_support_data_t
{
  void * data[2];
} _FocusPoint_Event_type_support_data_t;

static _FocusPoint_Event_type_support_data_t _FocusPoint_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FocusPoint_Event_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_FocusPoint_Event_message_typesupport_ids.typesupport_identifier[0],
  &_FocusPoint_Event_message_typesupport_symbol_names.symbol_name[0],
  &_FocusPoint_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FocusPoint_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FocusPoint_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__FocusPoint_Event__get_type_hash,
  &octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description,
  &octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, FocusPoint_Event)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::FocusPoint_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/focus_point__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _FocusPoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FocusPoint_type_support_ids_t;

static const _FocusPoint_type_support_ids_t _FocusPoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FocusPoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FocusPoint_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FocusPoint_type_support_symbol_names_t _FocusPoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, FocusPoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, FocusPoint)),
  }
};

typedef struct _FocusPoint_type_support_data_t
{
  void * data[2];
} _FocusPoint_type_support_data_t;

static _FocusPoint_type_support_data_t _FocusPoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FocusPoint_service_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_FocusPoint_service_typesupport_ids.typesupport_identifier[0],
  &_FocusPoint_service_typesupport_symbol_names.symbol_name[0],
  &_FocusPoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FocusPoint_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FocusPoint_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &FocusPoint_Request_message_type_support_handle,
  &FocusPoint_Response_message_type_support_handle,
  &FocusPoint_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, FocusPoint)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::FocusPoint_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
