// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_lite_interfaces:srv/Save.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__BUILDER_HPP_
#define CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_lite_interfaces/srv/detail/save__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_lite_interfaces
{

namespace srv
{

namespace builder
{

class Init_Save_Request_name
{
public:
  Init_Save_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_lite_interfaces::srv::Save_Request name(::camera_lite_interfaces::srv::Save_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_lite_interfaces::srv::Save_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_lite_interfaces::srv::Save_Request>()
{
  return camera_lite_interfaces::srv::builder::Init_Save_Request_name();
}

}  // namespace camera_lite_interfaces


namespace camera_lite_interfaces
{

namespace srv
{

namespace builder
{

class Init_Save_Response_result
{
public:
  Init_Save_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_lite_interfaces::srv::Save_Response result(::camera_lite_interfaces::srv::Save_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_lite_interfaces::srv::Save_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_lite_interfaces::srv::Save_Response>()
{
  return camera_lite_interfaces::srv::builder::Init_Save_Response_result();
}

}  // namespace camera_lite_interfaces

#endif  // CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__BUILDER_HPP_
