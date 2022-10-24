// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_lite_interfaces:srv/Save.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__TRAITS_HPP_
#define CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_lite_interfaces/srv/detail/save__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_lite_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Save_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Save_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Save_Request & msg, bool use_flow_style = false)
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

}  // namespace camera_lite_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use camera_lite_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_lite_interfaces::srv::Save_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_lite_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_lite_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_lite_interfaces::srv::Save_Request & msg)
{
  return camera_lite_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_lite_interfaces::srv::Save_Request>()
{
  return "camera_lite_interfaces::srv::Save_Request";
}

template<>
inline const char * name<camera_lite_interfaces::srv::Save_Request>()
{
  return "camera_lite_interfaces/srv/Save_Request";
}

template<>
struct has_fixed_size<camera_lite_interfaces::srv::Save_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_lite_interfaces::srv::Save_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_lite_interfaces::srv::Save_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_lite_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Save_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Save_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Save_Response & msg, bool use_flow_style = false)
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

}  // namespace camera_lite_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use camera_lite_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_lite_interfaces::srv::Save_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_lite_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_lite_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_lite_interfaces::srv::Save_Response & msg)
{
  return camera_lite_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_lite_interfaces::srv::Save_Response>()
{
  return "camera_lite_interfaces::srv::Save_Response";
}

template<>
inline const char * name<camera_lite_interfaces::srv::Save_Response>()
{
  return "camera_lite_interfaces/srv/Save_Response";
}

template<>
struct has_fixed_size<camera_lite_interfaces::srv::Save_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_lite_interfaces::srv::Save_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_lite_interfaces::srv::Save_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_lite_interfaces::srv::Save>()
{
  return "camera_lite_interfaces::srv::Save";
}

template<>
inline const char * name<camera_lite_interfaces::srv::Save>()
{
  return "camera_lite_interfaces/srv/Save";
}

template<>
struct has_fixed_size<camera_lite_interfaces::srv::Save>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_lite_interfaces::srv::Save_Request>::value &&
    has_fixed_size<camera_lite_interfaces::srv::Save_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_lite_interfaces::srv::Save>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_lite_interfaces::srv::Save_Request>::value &&
    has_bounded_size<camera_lite_interfaces::srv::Save_Response>::value
  >
{
};

template<>
struct is_service<camera_lite_interfaces::srv::Save>
  : std::true_type
{
};

template<>
struct is_service_request<camera_lite_interfaces::srv::Save_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_lite_interfaces::srv::Save_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__TRAITS_HPP_
