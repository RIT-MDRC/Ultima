// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_lite_interfaces:srv/Save.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__STRUCT_HPP_
#define CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_lite_interfaces__srv__Save_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_lite_interfaces__srv__Save_Request __declspec(deprecated)
#endif

namespace camera_lite_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Save_Request_
{
  using Type = Save_Request_<ContainerAllocator>;

  explicit Save_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit Save_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_lite_interfaces::srv::Save_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_lite_interfaces::srv::Save_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_lite_interfaces::srv::Save_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_lite_interfaces::srv::Save_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_lite_interfaces__srv__Save_Request
    std::shared_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_lite_interfaces__srv__Save_Request
    std::shared_ptr<camera_lite_interfaces::srv::Save_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Save_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Save_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Save_Request_

// alias to use template instance with default allocator
using Save_Request =
  camera_lite_interfaces::srv::Save_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_lite_interfaces


#ifndef _WIN32
# define DEPRECATED__camera_lite_interfaces__srv__Save_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_lite_interfaces__srv__Save_Response __declspec(deprecated)
#endif

namespace camera_lite_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Save_Response_
{
  using Type = Save_Response_<ContainerAllocator>;

  explicit Save_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Save_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_lite_interfaces::srv::Save_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_lite_interfaces::srv::Save_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_lite_interfaces::srv::Save_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_lite_interfaces::srv::Save_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_lite_interfaces__srv__Save_Response
    std::shared_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_lite_interfaces__srv__Save_Response
    std::shared_ptr<camera_lite_interfaces::srv::Save_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Save_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Save_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Save_Response_

// alias to use template instance with default allocator
using Save_Response =
  camera_lite_interfaces::srv::Save_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_lite_interfaces

namespace camera_lite_interfaces
{

namespace srv
{

struct Save
{
  using Request = camera_lite_interfaces::srv::Save_Request;
  using Response = camera_lite_interfaces::srv::Save_Response;
};

}  // namespace srv

}  // namespace camera_lite_interfaces

#endif  // CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__STRUCT_HPP_
