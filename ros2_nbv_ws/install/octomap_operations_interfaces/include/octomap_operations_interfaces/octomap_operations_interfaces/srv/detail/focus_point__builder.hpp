// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from octomap_operations_interfaces:srv/FocusPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/focus_point.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__FOCUS_POINT__BUILDER_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__FOCUS_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "octomap_operations_interfaces/srv/detail/focus_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_FocusPoint_Request_run_parallel
{
public:
  explicit Init_FocusPoint_Request_run_parallel(::octomap_operations_interfaces::srv::FocusPoint_Request & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::FocusPoint_Request run_parallel(::octomap_operations_interfaces::srv::FocusPoint_Request::_run_parallel_type arg)
  {
    msg_.run_parallel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Request msg_;
};

class Init_FocusPoint_Request_pose
{
public:
  Init_FocusPoint_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FocusPoint_Request_run_parallel pose(::octomap_operations_interfaces::srv::FocusPoint_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_FocusPoint_Request_run_parallel(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::FocusPoint_Request>()
{
  return octomap_operations_interfaces::srv::builder::Init_FocusPoint_Request_pose();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_FocusPoint_Response_elapsed_time
{
public:
  explicit Init_FocusPoint_Response_elapsed_time(::octomap_operations_interfaces::srv::FocusPoint_Response & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::FocusPoint_Response elapsed_time(::octomap_operations_interfaces::srv::FocusPoint_Response::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Response msg_;
};

class Init_FocusPoint_Response_focus_pnt
{
public:
  Init_FocusPoint_Response_focus_pnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FocusPoint_Response_elapsed_time focus_pnt(::octomap_operations_interfaces::srv::FocusPoint_Response::_focus_pnt_type arg)
  {
    msg_.focus_pnt = std::move(arg);
    return Init_FocusPoint_Response_elapsed_time(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::FocusPoint_Response>()
{
  return octomap_operations_interfaces::srv::builder::Init_FocusPoint_Response_focus_pnt();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_FocusPoint_Event_response
{
public:
  explicit Init_FocusPoint_Event_response(::octomap_operations_interfaces::srv::FocusPoint_Event & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::FocusPoint_Event response(::octomap_operations_interfaces::srv::FocusPoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Event msg_;
};

class Init_FocusPoint_Event_request
{
public:
  explicit Init_FocusPoint_Event_request(::octomap_operations_interfaces::srv::FocusPoint_Event & msg)
  : msg_(msg)
  {}
  Init_FocusPoint_Event_response request(::octomap_operations_interfaces::srv::FocusPoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FocusPoint_Event_response(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Event msg_;
};

class Init_FocusPoint_Event_info
{
public:
  Init_FocusPoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FocusPoint_Event_request info(::octomap_operations_interfaces::srv::FocusPoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FocusPoint_Event_request(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::FocusPoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::FocusPoint_Event>()
{
  return octomap_operations_interfaces::srv::builder::Init_FocusPoint_Event_info();
}

}  // namespace octomap_operations_interfaces

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__FOCUS_POINT__BUILDER_HPP_
