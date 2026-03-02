// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from octomap_operations_interfaces:srv/OctomapData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "octomap_operations_interfaces/srv/detail/octomap_data__struct.h"
#include "octomap_operations_interfaces/srv/detail/octomap_data__type_support.h"
#include "octomap_operations_interfaces/srv/detail/octomap_data__functions.h"
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

typedef struct _OctomapData_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OctomapData_Request_type_support_ids_t;

static const _OctomapData_Request_type_support_ids_t _OctomapData_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OctomapData_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OctomapData_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OctomapData_Request_type_support_symbol_names_t _OctomapData_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, OctomapData_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, OctomapData_Request)),
  }
};

typedef struct _OctomapData_Request_type_support_data_t
{
  void * data[2];
} _OctomapData_Request_type_support_data_t;

static _OctomapData_Request_type_support_data_t _OctomapData_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OctomapData_Request_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_OctomapData_Request_message_typesupport_ids.typesupport_identifier[0],
  &_OctomapData_Request_message_typesupport_symbol_names.symbol_name[0],
  &_OctomapData_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OctomapData_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OctomapData_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__OctomapData_Request__get_type_hash,
  &octomap_operations_interfaces__srv__OctomapData_Request__get_type_description,
  &octomap_operations_interfaces__srv__OctomapData_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, OctomapData_Request)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::OctomapData_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__type_support.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__functions.h"
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

typedef struct _OctomapData_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OctomapData_Response_type_support_ids_t;

static const _OctomapData_Response_type_support_ids_t _OctomapData_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OctomapData_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OctomapData_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OctomapData_Response_type_support_symbol_names_t _OctomapData_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, OctomapData_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, OctomapData_Response)),
  }
};

typedef struct _OctomapData_Response_type_support_data_t
{
  void * data[2];
} _OctomapData_Response_type_support_data_t;

static _OctomapData_Response_type_support_data_t _OctomapData_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OctomapData_Response_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_OctomapData_Response_message_typesupport_ids.typesupport_identifier[0],
  &_OctomapData_Response_message_typesupport_symbol_names.symbol_name[0],
  &_OctomapData_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OctomapData_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OctomapData_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__OctomapData_Response__get_type_hash,
  &octomap_operations_interfaces__srv__OctomapData_Response__get_type_description,
  &octomap_operations_interfaces__srv__OctomapData_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, OctomapData_Response)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::OctomapData_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__type_support.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__functions.h"
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

typedef struct _OctomapData_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OctomapData_Event_type_support_ids_t;

static const _OctomapData_Event_type_support_ids_t _OctomapData_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OctomapData_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OctomapData_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OctomapData_Event_type_support_symbol_names_t _OctomapData_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, OctomapData_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, OctomapData_Event)),
  }
};

typedef struct _OctomapData_Event_type_support_data_t
{
  void * data[2];
} _OctomapData_Event_type_support_data_t;

static _OctomapData_Event_type_support_data_t _OctomapData_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OctomapData_Event_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_OctomapData_Event_message_typesupport_ids.typesupport_identifier[0],
  &_OctomapData_Event_message_typesupport_symbol_names.symbol_name[0],
  &_OctomapData_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OctomapData_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OctomapData_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__OctomapData_Event__get_type_hash,
  &octomap_operations_interfaces__srv__OctomapData_Event__get_type_description,
  &octomap_operations_interfaces__srv__OctomapData_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, OctomapData_Event)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::OctomapData_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/octomap_data__type_support.h"
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
typedef struct _OctomapData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OctomapData_type_support_ids_t;

static const _OctomapData_type_support_ids_t _OctomapData_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OctomapData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OctomapData_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OctomapData_type_support_symbol_names_t _OctomapData_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_operations_interfaces, srv, OctomapData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_operations_interfaces, srv, OctomapData)),
  }
};

typedef struct _OctomapData_type_support_data_t
{
  void * data[2];
} _OctomapData_type_support_data_t;

static _OctomapData_type_support_data_t _OctomapData_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OctomapData_service_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_OctomapData_service_typesupport_ids.typesupport_identifier[0],
  &_OctomapData_service_typesupport_symbol_names.symbol_name[0],
  &_OctomapData_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t OctomapData_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OctomapData_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &OctomapData_Request_message_type_support_handle,
  &OctomapData_Response_message_type_support_handle,
  &OctomapData_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    octomap_operations_interfaces,
    srv,
    OctomapData
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    octomap_operations_interfaces,
    srv,
    OctomapData
  ),
  &octomap_operations_interfaces__srv__OctomapData__get_type_hash,
  &octomap_operations_interfaces__srv__OctomapData__get_type_description,
  &octomap_operations_interfaces__srv__OctomapData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace octomap_operations_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, octomap_operations_interfaces, srv, OctomapData)() {
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_c::OctomapData_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
