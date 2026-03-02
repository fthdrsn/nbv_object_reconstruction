// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from octomap_operations_interfaces:srv/OctomapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/octomap_data.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__BUILDER_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "octomap_operations_interfaces/srv/detail/octomap_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace octomap_operations_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::OctomapData_Request>()
{
  return ::octomap_operations_interfaces::srv::OctomapData_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_OctomapData_Response_free
{
public:
  explicit Init_OctomapData_Response_free(::octomap_operations_interfaces::srv::OctomapData_Response & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::OctomapData_Response free(::octomap_operations_interfaces::srv::OctomapData_Response::_free_type arg)
  {
    msg_.free = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Response msg_;
};

class Init_OctomapData_Response_occupied
{
public:
  explicit Init_OctomapData_Response_occupied(::octomap_operations_interfaces::srv::OctomapData_Response & msg)
  : msg_(msg)
  {}
  Init_OctomapData_Response_free occupied(::octomap_operations_interfaces::srv::OctomapData_Response::_occupied_type arg)
  {
    msg_.occupied = std::move(arg);
    return Init_OctomapData_Response_free(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Response msg_;
};

class Init_OctomapData_Response_unknown
{
public:
  explicit Init_OctomapData_Response_unknown(::octomap_operations_interfaces::srv::OctomapData_Response & msg)
  : msg_(msg)
  {}
  Init_OctomapData_Response_occupied unknown(::octomap_operations_interfaces::srv::OctomapData_Response::_unknown_type arg)
  {
    msg_.unknown = std::move(arg);
    return Init_OctomapData_Response_occupied(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Response msg_;
};

class Init_OctomapData_Response_ent
{
public:
  explicit Init_OctomapData_Response_ent(::octomap_operations_interfaces::srv::OctomapData_Response & msg)
  : msg_(msg)
  {}
  Init_OctomapData_Response_unknown ent(::octomap_operations_interfaces::srv::OctomapData_Response::_ent_type arg)
  {
    msg_.ent = std::move(arg);
    return Init_OctomapData_Response_unknown(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Response msg_;
};

class Init_OctomapData_Response_cvr
{
public:
  Init_OctomapData_Response_cvr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OctomapData_Response_ent cvr(::octomap_operations_interfaces::srv::OctomapData_Response::_cvr_type arg)
  {
    msg_.cvr = std::move(arg);
    return Init_OctomapData_Response_ent(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::OctomapData_Response>()
{
  return octomap_operations_interfaces::srv::builder::Init_OctomapData_Response_cvr();
}

}  // namespace octomap_operations_interfaces


namespace octomap_operations_interfaces
{

namespace srv
{

namespace builder
{

class Init_OctomapData_Event_response
{
public:
  explicit Init_OctomapData_Event_response(::octomap_operations_interfaces::srv::OctomapData_Event & msg)
  : msg_(msg)
  {}
  ::octomap_operations_interfaces::srv::OctomapData_Event response(::octomap_operations_interfaces::srv::OctomapData_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Event msg_;
};

class Init_OctomapData_Event_request
{
public:
  explicit Init_OctomapData_Event_request(::octomap_operations_interfaces::srv::OctomapData_Event & msg)
  : msg_(msg)
  {}
  Init_OctomapData_Event_response request(::octomap_operations_interfaces::srv::OctomapData_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_OctomapData_Event_response(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Event msg_;
};

class Init_OctomapData_Event_info
{
public:
  Init_OctomapData_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OctomapData_Event_request info(::octomap_operations_interfaces::srv::OctomapData_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_OctomapData_Event_request(msg_);
  }

private:
  ::octomap_operations_interfaces::srv::OctomapData_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::octomap_operations_interfaces::srv::OctomapData_Event>()
{
  return octomap_operations_interfaces::srv::builder::Init_OctomapData_Event_info();
}

}  // namespace octomap_operations_interfaces

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__BUILDER_HPP_
