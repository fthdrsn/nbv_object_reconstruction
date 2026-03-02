// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from octomap_operations_interfaces:srv/ViewEvaluate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "octomap_operations_interfaces/srv/view_evaluate.hpp"


#ifndef OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__STRUCT_HPP_
#define OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Request __attribute__((deprecated))
#else
# define DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Request __declspec(deprecated)
#endif

namespace octomap_operations_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ViewEvaluate_Request_
{
  using Type = ViewEvaluate_Request_<ContainerAllocator>;

  explicit ViewEvaluate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ig_method = "";
      this->run_parallel = false;
    }
  }

  explicit ViewEvaluate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ig_method(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ig_method = "";
      this->run_parallel = false;
    }
  }

  // field types and members
  using _ig_method_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ig_method_type ig_method;
  using _view_list_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _view_list_type view_list;
  using _run_parallel_type =
    bool;
  _run_parallel_type run_parallel;

  // setters for named parameter idiom
  Type & set__ig_method(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ig_method = _arg;
    return *this;
  }
  Type & set__view_list(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->view_list = _arg;
    return *this;
  }
  Type & set__run_parallel(
    const bool & _arg)
  {
    this->run_parallel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Request
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Request
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ViewEvaluate_Request_ & other) const
  {
    if (this->ig_method != other.ig_method) {
      return false;
    }
    if (this->view_list != other.view_list) {
      return false;
    }
    if (this->run_parallel != other.run_parallel) {
      return false;
    }
    return true;
  }
  bool operator!=(const ViewEvaluate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ViewEvaluate_Request_

// alias to use template instance with default allocator
using ViewEvaluate_Request =
  octomap_operations_interfaces::srv::ViewEvaluate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace octomap_operations_interfaces


#ifndef _WIN32
# define DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Response __attribute__((deprecated))
#else
# define DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Response __declspec(deprecated)
#endif

namespace octomap_operations_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ViewEvaluate_Response_
{
  using Type = ViewEvaluate_Response_<ContainerAllocator>;

  explicit ViewEvaluate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elapsed_time = 0.0f;
    }
  }

  explicit ViewEvaluate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elapsed_time = 0.0f;
    }
  }

  // field types and members
  using _view_igs_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _view_igs_type view_igs;
  using _elapsed_time_type =
    float;
  _elapsed_time_type elapsed_time;

  // setters for named parameter idiom
  Type & set__view_igs(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->view_igs = _arg;
    return *this;
  }
  Type & set__elapsed_time(
    const float & _arg)
  {
    this->elapsed_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Response
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Response
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ViewEvaluate_Response_ & other) const
  {
    if (this->view_igs != other.view_igs) {
      return false;
    }
    if (this->elapsed_time != other.elapsed_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ViewEvaluate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ViewEvaluate_Response_

// alias to use template instance with default allocator
using ViewEvaluate_Response =
  octomap_operations_interfaces::srv::ViewEvaluate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace octomap_operations_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Event __attribute__((deprecated))
#else
# define DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Event __declspec(deprecated)
#endif

namespace octomap_operations_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ViewEvaluate_Event_
{
  using Type = ViewEvaluate_Event_<ContainerAllocator>;

  explicit ViewEvaluate_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ViewEvaluate_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::ViewEvaluate_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<octomap_operations_interfaces::srv::ViewEvaluate_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Event
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__octomap_operations_interfaces__srv__ViewEvaluate_Event
    std::shared_ptr<octomap_operations_interfaces::srv::ViewEvaluate_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ViewEvaluate_Event_ & other) const
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
  bool operator!=(const ViewEvaluate_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ViewEvaluate_Event_

// alias to use template instance with default allocator
using ViewEvaluate_Event =
  octomap_operations_interfaces::srv::ViewEvaluate_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace octomap_operations_interfaces

namespace octomap_operations_interfaces
{

namespace srv
{

struct ViewEvaluate
{
  using Request = octomap_operations_interfaces::srv::ViewEvaluate_Request;
  using Response = octomap_operations_interfaces::srv::ViewEvaluate_Response;
  using Event = octomap_operations_interfaces::srv::ViewEvaluate_Event;
};

}  // namespace srv

}  // namespace octomap_operations_interfaces

#endif  // OCTOMAP_OPERATIONS_INTERFACES__SRV__DETAIL__VIEW_EVALUATE__STRUCT_HPP_
