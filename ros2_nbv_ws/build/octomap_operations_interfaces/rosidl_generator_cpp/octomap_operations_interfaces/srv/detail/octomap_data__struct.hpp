// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from octomap_operations_interfaces:srv/OctomapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/octomap_data.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__STRUCT_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Request __attribute__((deprecated))
#else
# define DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Request __declspec(deprecated)
#endif

namespace octomap_operations_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OctomapData_Request_
{
  using Type = OctomapData_Request_<ContainerAllocator>;

  explicit OctomapData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit OctomapData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Request
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Request
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OctomapData_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const OctomapData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OctomapData_Request_

// alias to use template instance with default allocator
using OctomapData_Request =
  octomap_operations_interfaces::srv::OctomapData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace octomap_operations_interfaces


#ifndef _WIN32
# define DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Response __attribute__((deprecated))
#else
# define DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Response __declspec(deprecated)
#endif

namespace octomap_operations_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OctomapData_Response_
{
  using Type = OctomapData_Response_<ContainerAllocator>;

  explicit OctomapData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cvr = 0.0f;
      this->ent = 0.0f;
      this->unknown = 0.0f;
      this->occupied = 0.0f;
      this->free = 0.0f;
    }
  }

  explicit OctomapData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cvr = 0.0f;
      this->ent = 0.0f;
      this->unknown = 0.0f;
      this->occupied = 0.0f;
      this->free = 0.0f;
    }
  }

  // field types and members
  using _cvr_type =
    float;
  _cvr_type cvr;
  using _ent_type =
    float;
  _ent_type ent;
  using _unknown_type =
    float;
  _unknown_type unknown;
  using _occupied_type =
    float;
  _occupied_type occupied;
  using _free_type =
    float;
  _free_type free;

  // setters for named parameter idiom
  Type & set__cvr(
    const float & _arg)
  {
    this->cvr = _arg;
    return *this;
  }
  Type & set__ent(
    const float & _arg)
  {
    this->ent = _arg;
    return *this;
  }
  Type & set__unknown(
    const float & _arg)
  {
    this->unknown = _arg;
    return *this;
  }
  Type & set__occupied(
    const float & _arg)
  {
    this->occupied = _arg;
    return *this;
  }
  Type & set__free(
    const float & _arg)
  {
    this->free = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Response
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Response
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OctomapData_Response_ & other) const
  {
    if (this->cvr != other.cvr) {
      return false;
    }
    if (this->ent != other.ent) {
      return false;
    }
    if (this->unknown != other.unknown) {
      return false;
    }
    if (this->occupied != other.occupied) {
      return false;
    }
    if (this->free != other.free) {
      return false;
    }
    return true;
  }
  bool operator!=(const OctomapData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OctomapData_Response_

// alias to use template instance with default allocator
using OctomapData_Response =
  octomap_operations_interfaces::srv::OctomapData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace octomap_operations_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Event __attribute__((deprecated))
#else
# define DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Event __declspec(deprecated)
#endif

namespace octomap_operations_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OctomapData_Event_
{
  using Type = OctomapData_Event_<ContainerAllocator>;

  explicit OctomapData_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit OctomapData_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::OctomapData_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::OctomapData_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Event
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__octomap_operations_interfaces__srv__OctomapData_Event
    std::shared_ptr<octomap_operations_interfaces::srv::OctomapData_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OctomapData_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const OctomapData_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OctomapData_Event_

// alias to use template instance with default allocator
using OctomapData_Event =
  octomap_operations_interfaces::srv::OctomapData_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace octomap_operations_interfaces
{

namespace srv
{

struct OctomapData
{
  using Request = octomap_operations_interfaces::srv::OctomapData_Request;
  using Response = octomap_operations_interfaces::srv::OctomapData_Response;
  using Event = octomap_operations_interfaces::srv::OctomapData_Event;
};

}  // namespace srv

}  // namespace octomap_operations_interfaces

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__OCTOMAP_DATA__STRUCT_HPP_
