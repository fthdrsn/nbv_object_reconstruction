// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from octomap_operations_interfaces:srv/FocusPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/focus_point.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__FOCUS_POINT__TRAITS_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__FOCUS_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "octomap_operations_interfaces/srv/detail/focus_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FocusPoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    if (msg.pose.size() == 0) {
      out << "pose: []";
    } else {
      out << "pose: [";
      size_t pending_items = msg.pose.size();
      for (auto item : msg.pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: run_parallel
  {
    out << "run_parallel: ";
    rosidl_generator_traits::value_to_yaml(msg.run_parallel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FocusPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose.size() == 0) {
      out << "pose: []\n";
    } else {
      out << "pose:\n";
      for (auto item : msg.pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: run_parallel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_parallel: ";
    rosidl_generator_traits::value_to_yaml(msg.run_parallel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FocusPoint_Request & msg, bool use_flow_style = false)
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
  const octomap_operations_interfaces::srv::FocusPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::FocusPoint_Request & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::FocusPoint_Request>()
{
  return "octomap_operations_interfaces::srv::FocusPoint_Request";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::FocusPoint_Request>()
{
  return "octomap_operations_interfaces/srv/FocusPoint_Request";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::FocusPoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<octomap_operations_interfaces::srv::FocusPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FocusPoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: focus_pnt
  {
    if (msg.focus_pnt.size() == 0) {
      out << "focus_pnt: []";
    } else {
      out << "focus_pnt: [";
      size_t pending_items = msg.focus_pnt.size();
      for (auto item : msg.focus_pnt) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elapsed_time
  {
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FocusPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: focus_pnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.focus_pnt.size() == 0) {
      out << "focus_pnt: []\n";
    } else {
      out << "focus_pnt:\n";
      for (auto item : msg.focus_pnt) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FocusPoint_Response & msg, bool use_flow_style = false)
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
  const octomap_operations_interfaces::srv::FocusPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::FocusPoint_Response & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::FocusPoint_Response>()
{
  return "octomap_operations_interfaces::srv::FocusPoint_Response";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::FocusPoint_Response>()
{
  return "octomap_operations_interfaces/srv/FocusPoint_Response";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::FocusPoint_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<octomap_operations_interfaces::srv::FocusPoint_Response>
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
  const FocusPoint_Event & msg,
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
  const FocusPoint_Event & msg,
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

inline std::string to_yaml(const FocusPoint_Event & msg, bool use_flow_style = false)
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
  const octomap_operations_interfaces::srv::FocusPoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::FocusPoint_Event & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::FocusPoint_Event>()
{
  return "octomap_operations_interfaces::srv::FocusPoint_Event";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::FocusPoint_Event>()
{
  return "octomap_operations_interfaces/srv/FocusPoint_Event";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::FocusPoint_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Event>
  : std::integral_constant<bool, has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Request>::value && has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<octomap_operations_interfaces::srv::FocusPoint_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_operations_interfaces::srv::FocusPoint>()
{
  return "octomap_operations_interfaces::srv::FocusPoint";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::FocusPoint>()
{
  return "octomap_operations_interfaces/srv/FocusPoint";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::FocusPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<octomap_operations_interfaces::srv::FocusPoint_Request>::value &&
    has_fixed_size<octomap_operations_interfaces::srv::FocusPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::FocusPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Request>::value &&
    has_bounded_size<octomap_operations_interfaces::srv::FocusPoint_Response>::value
  >
{
};

template<>
struct is_service<octomap_operations_interfaces::srv::FocusPoint>
  : std::true_type
{
};

template<>
struct is_service_request<octomap_operations_interfaces::srv::FocusPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<octomap_operations_interfaces::srv::FocusPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__FOCUS_POINT__TRAITS_HPP_
