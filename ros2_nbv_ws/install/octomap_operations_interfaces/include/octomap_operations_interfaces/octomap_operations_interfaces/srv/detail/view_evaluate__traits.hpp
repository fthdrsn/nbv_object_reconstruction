// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from octomap_operations_interfaces:srv/ViewEvaluate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/view_evaluate.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__TRAITS_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "octomap_operations_interfaces/srv/detail/view_evaluate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ViewEvaluate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ig_method
  {
    out << "ig_method: ";
    rosidl_generator_traits::value_to_yaml(msg.ig_method, out);
    out << ", ";
  }

  // member: view_list
  {
    if (msg.view_list.size() == 0) {
      out << "view_list: []";
    } else {
      out << "view_list: [";
      size_t pending_items = msg.view_list.size();
      for (auto item : msg.view_list) {
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
  const ViewEvaluate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ig_method
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ig_method: ";
    rosidl_generator_traits::value_to_yaml(msg.ig_method, out);
    out << "\n";
  }

  // member: view_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.view_list.size() == 0) {
      out << "view_list: []\n";
    } else {
      out << "view_list:\n";
      for (auto item : msg.view_list) {
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

inline std::string to_yaml(const ViewEvaluate_Request & msg, bool use_flow_style = false)
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
  const octomap_operations_interfaces::srv::ViewEvaluate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::ViewEvaluate_Request & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::ViewEvaluate_Request>()
{
  return "octomap_operations_interfaces::srv::ViewEvaluate_Request";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::ViewEvaluate_Request>()
{
  return "octomap_operations_interfaces/srv/ViewEvaluate_Request";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::ViewEvaluate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<octomap_operations_interfaces::srv::ViewEvaluate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace octomap_operations_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ViewEvaluate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: view_igs
  {
    if (msg.view_igs.size() == 0) {
      out << "view_igs: []";
    } else {
      out << "view_igs: [";
      size_t pending_items = msg.view_igs.size();
      for (auto item : msg.view_igs) {
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
  const ViewEvaluate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: view_igs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.view_igs.size() == 0) {
      out << "view_igs: []\n";
    } else {
      out << "view_igs:\n";
      for (auto item : msg.view_igs) {
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

inline std::string to_yaml(const ViewEvaluate_Response & msg, bool use_flow_style = false)
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
  const octomap_operations_interfaces::srv::ViewEvaluate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::ViewEvaluate_Response & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::ViewEvaluate_Response>()
{
  return "octomap_operations_interfaces::srv::ViewEvaluate_Response";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::ViewEvaluate_Response>()
{
  return "octomap_operations_interfaces/srv/ViewEvaluate_Response";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::ViewEvaluate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<octomap_operations_interfaces::srv::ViewEvaluate_Response>
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
  const ViewEvaluate_Event & msg,
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
  const ViewEvaluate_Event & msg,
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

inline std::string to_yaml(const ViewEvaluate_Event & msg, bool use_flow_style = false)
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
  const octomap_operations_interfaces::srv::ViewEvaluate_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  octomap_operations_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use octomap_operations_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const octomap_operations_interfaces::srv::ViewEvaluate_Event & msg)
{
  return octomap_operations_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<octomap_operations_interfaces::srv::ViewEvaluate_Event>()
{
  return "octomap_operations_interfaces::srv::ViewEvaluate_Event";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::ViewEvaluate_Event>()
{
  return "octomap_operations_interfaces/srv/ViewEvaluate_Event";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::ViewEvaluate_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Event>
  : std::integral_constant<bool, has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Request>::value && has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<octomap_operations_interfaces::srv::ViewEvaluate_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_operations_interfaces::srv::ViewEvaluate>()
{
  return "octomap_operations_interfaces::srv::ViewEvaluate";
}

template<>
inline const char * name<octomap_operations_interfaces::srv::ViewEvaluate>()
{
  return "octomap_operations_interfaces/srv/ViewEvaluate";
}

template<>
struct has_fixed_size<octomap_operations_interfaces::srv::ViewEvaluate>
  : std::integral_constant<
    bool,
    has_fixed_size<octomap_operations_interfaces::srv::ViewEvaluate_Request>::value &&
    has_fixed_size<octomap_operations_interfaces::srv::ViewEvaluate_Response>::value
  >
{
};

template<>
struct has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate>
  : std::integral_constant<
    bool,
    has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Request>::value &&
    has_bounded_size<octomap_operations_interfaces::srv::ViewEvaluate_Response>::value
  >
{
};

template<>
struct is_service<octomap_operations_interfaces::srv::ViewEvaluate>
  : std::true_type
{
};

template<>
struct is_service_request<octomap_operations_interfaces::srv::ViewEvaluate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<octomap_operations_interfaces::srv::ViewEvaluate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__TRAITS_HPP_
