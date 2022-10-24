// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_lite_interfaces:srv/Save.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__STRUCT_H_
#define CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Save in the package camera_lite_interfaces.
typedef struct camera_lite_interfaces__srv__Save_Request
{
  rosidl_runtime_c__String name;
} camera_lite_interfaces__srv__Save_Request;

// Struct for a sequence of camera_lite_interfaces__srv__Save_Request.
typedef struct camera_lite_interfaces__srv__Save_Request__Sequence
{
  camera_lite_interfaces__srv__Save_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_lite_interfaces__srv__Save_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Save in the package camera_lite_interfaces.
typedef struct camera_lite_interfaces__srv__Save_Response
{
  bool result;
} camera_lite_interfaces__srv__Save_Response;

// Struct for a sequence of camera_lite_interfaces__srv__Save_Response.
typedef struct camera_lite_interfaces__srv__Save_Response__Sequence
{
  camera_lite_interfaces__srv__Save_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_lite_interfaces__srv__Save_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_LITE_INTERFACES__SRV__DETAIL__SAVE__STRUCT_H_
