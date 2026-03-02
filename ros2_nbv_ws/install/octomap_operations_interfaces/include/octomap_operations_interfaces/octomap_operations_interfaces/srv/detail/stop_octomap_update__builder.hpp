// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from octomap_operations_interfaces:srv/StopOctomapUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/stop_octomap_update.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__STOP_OCTOMAP_UPDATE__BUILDER_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__STOP_OCTOMAP_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "octomap_operations_interfaces/srv/detail/stop_octomap_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopOctomapUpdate_Request_block_updates
{
public:
  Init_StopOctomapUpdate_Request_block_updates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Request block_updates(::octomap_operations_interfaces::srv::StopOctomapUpdate_Request::_block_updates_type arg)
  {
    msg_.block_updates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::StopOctomapUpdate_Request>()
{
  return octomap_operations_interfaces::srv::builder::Init_StopOctomapUpdate_Request_block_updates();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopOctomapUpdate_Response_success
{
public:
  Init_StopOctomapUpdate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Response success(::octomap_operations_interfaces::srv::StopOctomapUpdate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::StopOctomapUpdate_Response>()
{
  return octomap_operations_interfaces::srv::builder::Init_StopOctomapUpdate_Response_success();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_StopOctomapUpdate_Event_response
{
public:
  explicit Init_StopOctomapUpdate_Event_response(::octomap_operations_interfaces::srv::StopOctomapUpdate_Event & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Event response(::octomap_operations_interfaces::srv::StopOctomapUpdate_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Event msg_;
};

class Init_StopOctomapUpdate_Event_request
{
public:
  explicit Init_StopOctomapUpdate_Event_request(::octomap_operations_interfaces::srv::StopOctomapUpdate_Event & msg)
  : msg_(msg)
  {}
  Init_StopOctomapUpdate_Event_response request(::octomap_operations_interfaces::srv::StopOctomapUpdate_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopOctomapUpdate_Event_response(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Event msg_;
};

class Init_StopOctomapUpdate_Event_info
{
public:
  Init_StopOctomapUpdate_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopOctomapUpdate_Event_request info(::octomap_operations_interfaces::srv::StopOctomapUpdate_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopOctomapUpdate_Event_request(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::StopOctomapUpdate_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::StopOctomapUpdate_Event>()
{
  return octomap_operations_interfaces::srv::builder::Init_StopOctomapUpdate_Event_info();
}

}  // namespace octomap_operations_interfaces

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__STOP_OCTOMAP_UPDATE__BUILDER_HPP_
