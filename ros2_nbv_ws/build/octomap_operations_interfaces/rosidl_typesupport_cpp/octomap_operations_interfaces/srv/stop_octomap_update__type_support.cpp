// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from octomap_operations_interfaces:srv/StopOctomapUpdate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "octomap_operations_interfaces/srv/detail/stop_octomap_update__functions.h"
#include "octomap_operations_interfaces/srv/detail/stop_octomap_update__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StopOctomapUpdate_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopOctomapUpdate_Request_type_support_ids_t;

static const _StopOctomapUpdate_Request_type_support_ids_t _StopOctomapUpdate_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StopOctomapUpdate_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopOctomapUpdate_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopOctomapUpdate_Request_type_support_symbol_names_t _StopOctomapUpdate_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Request)),
  }
};

typedef struct _StopOctomapUpdate_Request_type_support_data_t
{
  void * data[2];
} _StopOctomapUpdate_Request_type_support_data_t;

static _StopOctomapUpdate_Request_type_support_data_t _StopOctomapUpdate_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopOctomapUpdate_Request_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_StopOctomapUpdate_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StopOctomapUpdate_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StopOctomapUpdate_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StopOctomapUpdate_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopOctomapUpdate_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Request__get_type_hash,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Request__get_type_description,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Request>()
{
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_cpp::StopOctomapUpdate_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Request)() {
  return get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/stop_octomap_update__functions.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/stop_octomap_update__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StopOctomapUpdate_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopOctomapUpdate_Response_type_support_ids_t;

static const _StopOctomapUpdate_Response_type_support_ids_t _StopOctomapUpdate_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StopOctomapUpdate_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopOctomapUpdate_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopOctomapUpdate_Response_type_support_symbol_names_t _StopOctomapUpdate_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Response)),
  }
};

typedef struct _StopOctomapUpdate_Response_type_support_data_t
{
  void * data[2];
} _StopOctomapUpdate_Response_type_support_data_t;

static _StopOctomapUpdate_Response_type_support_data_t _StopOctomapUpdate_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopOctomapUpdate_Response_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_StopOctomapUpdate_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StopOctomapUpdate_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StopOctomapUpdate_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StopOctomapUpdate_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopOctomapUpdate_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Response__get_type_hash,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Response__get_type_description,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Response>()
{
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_cpp::StopOctomapUpdate_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Response)() {
  return get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/stop_octomap_update__functions.h"
// already included above
// #include "octomap_operations_interfaces/srv/detail/stop_octomap_update__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StopOctomapUpdate_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopOctomapUpdate_Event_type_support_ids_t;

static const _StopOctomapUpdate_Event_type_support_ids_t _StopOctomapUpdate_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StopOctomapUpdate_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopOctomapUpdate_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopOctomapUpdate_Event_type_support_symbol_names_t _StopOctomapUpdate_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Event)),
  }
};

typedef struct _StopOctomapUpdate_Event_type_support_data_t
{
  void * data[2];
} _StopOctomapUpdate_Event_type_support_data_t;

static _StopOctomapUpdate_Event_type_support_data_t _StopOctomapUpdate_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopOctomapUpdate_Event_message_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_StopOctomapUpdate_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StopOctomapUpdate_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StopOctomapUpdate_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StopOctomapUpdate_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopOctomapUpdate_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Event__get_type_hash,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Event__get_type_description,
  &octomap_operations_interfaces__srv__StopOctomapUpdate_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Event>()
{
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_cpp::StopOctomapUpdate_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate_Event)() {
  return get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "octomap_operations_interfaces/srv/detail/stop_octomap_update__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace octomap_operations_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _StopOctomapUpdate_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StopOctomapUpdate_type_support_ids_t;

static const _StopOctomapUpdate_type_support_ids_t _StopOctomapUpdate_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StopOctomapUpdate_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StopOctomapUpdate_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StopOctomapUpdate_type_support_symbol_names_t _StopOctomapUpdate_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate)),
  }
};

typedef struct _StopOctomapUpdate_type_support_data_t
{
  void * data[2];
} _StopOctomapUpdate_type_support_data_t;

static _StopOctomapUpdate_type_support_data_t _StopOctomapUpdate_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StopOctomapUpdate_service_typesupport_map = {
  2,
  "octomap_operations_interfaces",
  &_StopOctomapUpdate_service_typesupport_ids.typesupport_identifier[0],
  &_StopOctomapUpdate_service_typesupport_symbol_names.symbol_name[0],
  &_StopOctomapUpdate_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StopOctomapUpdate_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StopOctomapUpdate_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<octomap_operations_interfaces::srv::StopOctomapUpdate>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<octomap_operations_interfaces::srv::StopOctomapUpdate>,
  &octomap_operations_interfaces__srv__StopOctomapUpdate__get_type_hash,
  &octomap_operations_interfaces__srv__StopOctomapUpdate__get_type_description,
  &octomap_operations_interfaces__srv__StopOctomapUpdate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate>()
{
  return &::octomap_operations_interfaces::srv::rosidl_typesupport_cpp::StopOctomapUpdate_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, octomap_operations_interfaces, srv, StopOctomapUpdate)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<octomap_operations_interfaces::srv::StopOctomapUpdate>();
}

#ifdef __cplusplus
}
#endif
