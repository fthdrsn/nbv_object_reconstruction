// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from octomap_operations_interfaces:srv/ViewEvaluate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/view_evaluate.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__BUILDER_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "octomap_operations_interfaces/srv/detail/view_evaluate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_ViewEvaluate_Request_run_parallel
{
public:
  explicit Init_ViewEvaluate_Request_run_parallel(::octomap_operations_interfaces::srv::ViewEvaluate_Request & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::ViewEvaluate_Request run_parallel(::octomap_operations_interfaces::srv::ViewEvaluate_Request::_run_parallel_type arg)
  {
    msg_.run_parallel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Request msg_;
};

class Init_ViewEvaluate_Request_view_list
{
public:
  explicit Init_ViewEvaluate_Request_view_list(::octomap_operations_interfaces::srv::ViewEvaluate_Request & msg)
  : msg_(msg)
  {}
  Init_ViewEvaluate_Request_run_parallel view_list(::octomap_operations_interfaces::srv::ViewEvaluate_Request::_view_list_type arg)
  {
    msg_.view_list = std::move(arg);
    return Init_ViewEvaluate_Request_run_parallel(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Request msg_;
};

class Init_ViewEvaluate_Request_ig_method
{
public:
  Init_ViewEvaluate_Request_ig_method()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ViewEvaluate_Request_view_list ig_method(::octomap_operations_interfaces::srv::ViewEvaluate_Request::_ig_method_type arg)
  {
    msg_.ig_method = std::move(arg);
    return Init_ViewEvaluate_Request_view_list(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::ViewEvaluate_Request>()
{
  return octomap_operations_interfaces::srv::builder::Init_ViewEvaluate_Request_ig_method();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_ViewEvaluate_Response_elapsed_time
{
public:
  explicit Init_ViewEvaluate_Response_elapsed_time(::octomap_operations_interfaces::srv::ViewEvaluate_Response & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::ViewEvaluate_Response elapsed_time(::octomap_operations_interfaces::srv::ViewEvaluate_Response::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Response msg_;
};

class Init_ViewEvaluate_Response_view_igs
{
public:
  Init_ViewEvaluate_Response_view_igs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ViewEvaluate_Response_elapsed_time view_igs(::octomap_operations_interfaces::srv::ViewEvaluate_Response::_view_igs_type arg)
  {
    msg_.view_igs = std::move(arg);
    return Init_ViewEvaluate_Response_elapsed_time(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::ViewEvaluate_Response>()
{
  return octomap_operations_interfaces::srv::builder::Init_ViewEvaluate_Response_view_igs();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_ViewEvaluate_Event_response
{
public:
  explicit Init_ViewEvaluate_Event_response(::octomap_operations_interfaces::srv::ViewEvaluate_Event & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::ViewEvaluate_Event response(::octomap_operations_interfaces::srv::ViewEvaluate_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Event msg_;
};

class Init_ViewEvaluate_Event_request
{
public:
  explicit Init_ViewEvaluate_Event_request(::octomap_operations_interfaces::srv::ViewEvaluate_Event & msg)
  : msg_(msg)
  {}
  Init_ViewEvaluate_Event_response request(::octomap_operations_interfaces::srv::ViewEvaluate_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ViewEvaluate_Event_response(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Event msg_;
};

class Init_ViewEvaluate_Event_info
{
public:
  Init_ViewEvaluate_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ViewEvaluate_Event_request info(::octomap_operations_interfaces::srv::ViewEvaluate_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ViewEvaluate_Event_request(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::ViewEvaluate_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::ViewEvaluate_Event>()
{
  return octomap_operations_interfaces::srv::builder::Init_ViewEvaluate_Event_info();
}

}  // namespace octomap_operations_interfaces

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__BUILDER_HPP_
