// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from octomap_operations_interfaces:srv/OctomapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/octomap_data.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__TRAITS_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "octomap_operations_interfaces/srv/detail/octomap_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OctomapData_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OctomapData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OctomapData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use octomap_operations_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const octomap_operations_interfaces::srv::OctomapData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::OctomapData_Request & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::OctomapData_Request>()
{
  return "octomap_operations_interfaces::srv::OctomapData_Request";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::OctomapData_Request>()
{
  return "octomap_operations_interfaces/srv/OctomapData_Request";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::OctomapData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<octomap_operations_interfaces::srv::OctomapData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OctomapData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cvr
  {
    out << "cvr: ";
    rosidl_generator_traits::value_to_yaml(msg.cvr, out);
    out << ", ";
  }

  // member: ent
  {
    out << "ent: ";
    rosidl_generator_traits::value_to_yaml(msg.ent, out);
    out << ", ";
  }

  // member: unknown
  {
    out << "unknown: ";
    rosidl_generator_traits::value_to_yaml(msg.unknown, out);
    out << ", ";
  }

  // member: occupied
  {
    out << "occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied, out);
    out << ", ";
  }

  // member: free
  {
    out << "free: ";
    rosidl_generator_traits::value_to_yaml(msg.free, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OctomapData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cvr: ";
    rosidl_generator_traits::value_to_yaml(msg.cvr, out);
    out << "\n";
  }

  // member: ent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ent: ";
    rosidl_generator_traits::value_to_yaml(msg.ent, out);
    out << "\n";
  }

  // member: unknown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unknown: ";
    rosidl_generator_traits::value_to_yaml(msg.unknown, out);
    out << "\n";
  }

  // member: occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied, out);
    out << "\n";
  }

  // member: free
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free: ";
    rosidl_generator_traits::value_to_yaml(msg.free, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OctomapData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use octomap_operations_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const octomap_operations_interfaces::srv::OctomapData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::OctomapData_Response & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::OctomapData_Response>()
{
  return "octomap_operations_interfaces::srv::OctomapData_Response";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::OctomapData_Response>()
{
  return "octomap_operations_interfaces/srv/OctomapData_Response";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::OctomapData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<octomap_operations_interfaces::srv::OctomapData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const OctomapData_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OctomapData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OctomapData_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use octomap_operations_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const octomap_operations_interfaces::srv::OctomapData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::OctomapData_Event & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::OctomapData_Event>()
{
  return "octomap_operations_interfaces::srv::OctomapData_Event";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::OctomapData_Event>()
{
  return "octomap_operations_interfaces/srv/OctomapData_Event";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::OctomapData_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Event>
  : std::integral_constant<bool, has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Request>::value && has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<octomap_operations_interfaces::srv::OctomapData_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_operations_interfaces::srv::OctomapData>()
{
  return "octomap_operations_interfaces::srv::OctomapData";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::OctomapData>()
{
  return "octomap_operations_interfaces/srv/OctomapData";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::OctomapData>
  : std::integral_constant<
    bool,
    has_fixed_size<octomap_operations_interfaces::srv::OctomapData_Request>::value &&
    has_fixed_size<octomap_operations_interfaces::srv::OctomapData_Response>::value
  >
{
};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::OctomapData>
  : std::integral_constant<
    bool,
    has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Request>::value &&
    has_bounded_size<octomap_operations_interfaces::srv::OctomapData_Response>::value
  >
{
};

template<>
struct is_service<octomap_operations_interfaces::srv::OctomapData>
  : std::true_type
{
};

template<>
struct is_service_request<octomap_operations_interfaces::srv::OctomapData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<octomap_operations_interfaces::srv::OctomapData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__TRAITS_HPP_
