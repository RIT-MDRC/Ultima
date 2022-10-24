// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_lite_interfaces:srv/Save.idl
// generated code does not contain a copyright notice
#include "camera_lite_interfaces/srv/detail/save__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
camera_lite_interfaces__srv__Save_Request__init(camera_lite_interfaces__srv__Save_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    camera_lite_interfaces__srv__Save_Request__fini(msg);
    return false;
  }
  return true;
}

void
camera_lite_interfaces__srv__Save_Request__fini(camera_lite_interfaces__srv__Save_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
camera_lite_interfaces__srv__Save_Request__are_equal(const camera_lite_interfaces__srv__Save_Request * lhs, const camera_lite_interfaces__srv__Save_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
camera_lite_interfaces__srv__Save_Request__copy(
  const camera_lite_interfaces__srv__Save_Request * input,
  camera_lite_interfaces__srv__Save_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

camera_lite_interfaces__srv__Save_Request *
camera_lite_interfaces__srv__Save_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_lite_interfaces__srv__Save_Request * msg = (camera_lite_interfaces__srv__Save_Request *)allocator.allocate(sizeof(camera_lite_interfaces__srv__Save_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_lite_interfaces__srv__Save_Request));
  bool success = camera_lite_interfaces__srv__Save_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_lite_interfaces__srv__Save_Request__destroy(camera_lite_interfaces__srv__Save_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_lite_interfaces__srv__Save_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_lite_interfaces__srv__Save_Request__Sequence__init(camera_lite_interfaces__srv__Save_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_lite_interfaces__srv__Save_Request * data = NULL;

  if (size) {
    data = (camera_lite_interfaces__srv__Save_Request *)allocator.zero_allocate(size, sizeof(camera_lite_interfaces__srv__Save_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_lite_interfaces__srv__Save_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_lite_interfaces__srv__Save_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_lite_interfaces__srv__Save_Request__Sequence__fini(camera_lite_interfaces__srv__Save_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_lite_interfaces__srv__Save_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_lite_interfaces__srv__Save_Request__Sequence *
camera_lite_interfaces__srv__Save_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_lite_interfaces__srv__Save_Request__Sequence * array = (camera_lite_interfaces__srv__Save_Request__Sequence *)allocator.allocate(sizeof(camera_lite_interfaces__srv__Save_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_lite_interfaces__srv__Save_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_lite_interfaces__srv__Save_Request__Sequence__destroy(camera_lite_interfaces__srv__Save_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_lite_interfaces__srv__Save_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_lite_interfaces__srv__Save_Request__Sequence__are_equal(const camera_lite_interfaces__srv__Save_Request__Sequence * lhs, const camera_lite_interfaces__srv__Save_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_lite_interfaces__srv__Save_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_lite_interfaces__srv__Save_Request__Sequence__copy(
  const camera_lite_interfaces__srv__Save_Request__Sequence * input,
  camera_lite_interfaces__srv__Save_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_lite_interfaces__srv__Save_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_lite_interfaces__srv__Save_Request * data =
      (camera_lite_interfaces__srv__Save_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_lite_interfaces__srv__Save_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_lite_interfaces__srv__Save_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_lite_interfaces__srv__Save_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
camera_lite_interfaces__srv__Save_Response__init(camera_lite_interfaces__srv__Save_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
camera_lite_interfaces__srv__Save_Response__fini(camera_lite_interfaces__srv__Save_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
camera_lite_interfaces__srv__Save_Response__are_equal(const camera_lite_interfaces__srv__Save_Response * lhs, const camera_lite_interfaces__srv__Save_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
camera_lite_interfaces__srv__Save_Response__copy(
  const camera_lite_interfaces__srv__Save_Response * input,
  camera_lite_interfaces__srv__Save_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

camera_lite_interfaces__srv__Save_Response *
camera_lite_interfaces__srv__Save_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_lite_interfaces__srv__Save_Response * msg = (camera_lite_interfaces__srv__Save_Response *)allocator.allocate(sizeof(camera_lite_interfaces__srv__Save_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_lite_interfaces__srv__Save_Response));
  bool success = camera_lite_interfaces__srv__Save_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_lite_interfaces__srv__Save_Response__destroy(camera_lite_interfaces__srv__Save_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_lite_interfaces__srv__Save_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_lite_interfaces__srv__Save_Response__Sequence__init(camera_lite_interfaces__srv__Save_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_lite_interfaces__srv__Save_Response * data = NULL;

  if (size) {
    data = (camera_lite_interfaces__srv__Save_Response *)allocator.zero_allocate(size, sizeof(camera_lite_interfaces__srv__Save_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_lite_interfaces__srv__Save_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_lite_interfaces__srv__Save_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_lite_interfaces__srv__Save_Response__Sequence__fini(camera_lite_interfaces__srv__Save_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_lite_interfaces__srv__Save_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_lite_interfaces__srv__Save_Response__Sequence *
camera_lite_interfaces__srv__Save_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_lite_interfaces__srv__Save_Response__Sequence * array = (camera_lite_interfaces__srv__Save_Response__Sequence *)allocator.allocate(sizeof(camera_lite_interfaces__srv__Save_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_lite_interfaces__srv__Save_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_lite_interfaces__srv__Save_Response__Sequence__destroy(camera_lite_interfaces__srv__Save_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_lite_interfaces__srv__Save_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_lite_interfaces__srv__Save_Response__Sequence__are_equal(const camera_lite_interfaces__srv__Save_Response__Sequence * lhs, const camera_lite_interfaces__srv__Save_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_lite_interfaces__srv__Save_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_lite_interfaces__srv__Save_Response__Sequence__copy(
  const camera_lite_interfaces__srv__Save_Response__Sequence * input,
  camera_lite_interfaces__srv__Save_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_lite_interfaces__srv__Save_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_lite_interfaces__srv__Save_Response * data =
      (camera_lite_interfaces__srv__Save_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_lite_interfaces__srv__Save_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_lite_interfaces__srv__Save_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_lite_interfaces__srv__Save_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
