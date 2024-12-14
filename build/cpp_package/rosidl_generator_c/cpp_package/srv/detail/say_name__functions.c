// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_package:srv/SayName.idl
// generated code does not contain a copyright notice
#include "cpp_package/srv/detail/say_name__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
// Member `surname`
#include "rosidl_runtime_c/string_functions.h"

bool
cpp_package__srv__SayName_Request__init(cpp_package__srv__SayName_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cpp_package__srv__SayName_Request__fini(msg);
    return false;
  }
  // surname
  if (!rosidl_runtime_c__String__init(&msg->surname)) {
    cpp_package__srv__SayName_Request__fini(msg);
    return false;
  }
  return true;
}

void
cpp_package__srv__SayName_Request__fini(cpp_package__srv__SayName_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // surname
  rosidl_runtime_c__String__fini(&msg->surname);
}

bool
cpp_package__srv__SayName_Request__are_equal(const cpp_package__srv__SayName_Request * lhs, const cpp_package__srv__SayName_Request * rhs)
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
  // surname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->surname), &(rhs->surname)))
  {
    return false;
  }
  return true;
}

bool
cpp_package__srv__SayName_Request__copy(
  const cpp_package__srv__SayName_Request * input,
  cpp_package__srv__SayName_Request * output)
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
  // surname
  if (!rosidl_runtime_c__String__copy(
      &(input->surname), &(output->surname)))
  {
    return false;
  }
  return true;
}

cpp_package__srv__SayName_Request *
cpp_package__srv__SayName_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_package__srv__SayName_Request * msg = (cpp_package__srv__SayName_Request *)allocator.allocate(sizeof(cpp_package__srv__SayName_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_package__srv__SayName_Request));
  bool success = cpp_package__srv__SayName_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_package__srv__SayName_Request__destroy(cpp_package__srv__SayName_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_package__srv__SayName_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_package__srv__SayName_Request__Sequence__init(cpp_package__srv__SayName_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_package__srv__SayName_Request * data = NULL;

  if (size) {
    data = (cpp_package__srv__SayName_Request *)allocator.zero_allocate(size, sizeof(cpp_package__srv__SayName_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_package__srv__SayName_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_package__srv__SayName_Request__fini(&data[i - 1]);
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
cpp_package__srv__SayName_Request__Sequence__fini(cpp_package__srv__SayName_Request__Sequence * array)
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
      cpp_package__srv__SayName_Request__fini(&array->data[i]);
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

cpp_package__srv__SayName_Request__Sequence *
cpp_package__srv__SayName_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_package__srv__SayName_Request__Sequence * array = (cpp_package__srv__SayName_Request__Sequence *)allocator.allocate(sizeof(cpp_package__srv__SayName_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_package__srv__SayName_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_package__srv__SayName_Request__Sequence__destroy(cpp_package__srv__SayName_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_package__srv__SayName_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_package__srv__SayName_Request__Sequence__are_equal(const cpp_package__srv__SayName_Request__Sequence * lhs, const cpp_package__srv__SayName_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_package__srv__SayName_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_package__srv__SayName_Request__Sequence__copy(
  const cpp_package__srv__SayName_Request__Sequence * input,
  cpp_package__srv__SayName_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_package__srv__SayName_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_package__srv__SayName_Request * data =
      (cpp_package__srv__SayName_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_package__srv__SayName_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_package__srv__SayName_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_package__srv__SayName_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `fullname`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cpp_package__srv__SayName_Response__init(cpp_package__srv__SayName_Response * msg)
{
  if (!msg) {
    return false;
  }
  // fullname
  if (!rosidl_runtime_c__String__init(&msg->fullname)) {
    cpp_package__srv__SayName_Response__fini(msg);
    return false;
  }
  return true;
}

void
cpp_package__srv__SayName_Response__fini(cpp_package__srv__SayName_Response * msg)
{
  if (!msg) {
    return;
  }
  // fullname
  rosidl_runtime_c__String__fini(&msg->fullname);
}

bool
cpp_package__srv__SayName_Response__are_equal(const cpp_package__srv__SayName_Response * lhs, const cpp_package__srv__SayName_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fullname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fullname), &(rhs->fullname)))
  {
    return false;
  }
  return true;
}

bool
cpp_package__srv__SayName_Response__copy(
  const cpp_package__srv__SayName_Response * input,
  cpp_package__srv__SayName_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // fullname
  if (!rosidl_runtime_c__String__copy(
      &(input->fullname), &(output->fullname)))
  {
    return false;
  }
  return true;
}

cpp_package__srv__SayName_Response *
cpp_package__srv__SayName_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_package__srv__SayName_Response * msg = (cpp_package__srv__SayName_Response *)allocator.allocate(sizeof(cpp_package__srv__SayName_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_package__srv__SayName_Response));
  bool success = cpp_package__srv__SayName_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_package__srv__SayName_Response__destroy(cpp_package__srv__SayName_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_package__srv__SayName_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_package__srv__SayName_Response__Sequence__init(cpp_package__srv__SayName_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_package__srv__SayName_Response * data = NULL;

  if (size) {
    data = (cpp_package__srv__SayName_Response *)allocator.zero_allocate(size, sizeof(cpp_package__srv__SayName_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_package__srv__SayName_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_package__srv__SayName_Response__fini(&data[i - 1]);
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
cpp_package__srv__SayName_Response__Sequence__fini(cpp_package__srv__SayName_Response__Sequence * array)
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
      cpp_package__srv__SayName_Response__fini(&array->data[i]);
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

cpp_package__srv__SayName_Response__Sequence *
cpp_package__srv__SayName_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_package__srv__SayName_Response__Sequence * array = (cpp_package__srv__SayName_Response__Sequence *)allocator.allocate(sizeof(cpp_package__srv__SayName_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_package__srv__SayName_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_package__srv__SayName_Response__Sequence__destroy(cpp_package__srv__SayName_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_package__srv__SayName_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_package__srv__SayName_Response__Sequence__are_equal(const cpp_package__srv__SayName_Response__Sequence * lhs, const cpp_package__srv__SayName_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_package__srv__SayName_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_package__srv__SayName_Response__Sequence__copy(
  const cpp_package__srv__SayName_Response__Sequence * input,
  cpp_package__srv__SayName_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_package__srv__SayName_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_package__srv__SayName_Response * data =
      (cpp_package__srv__SayName_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_package__srv__SayName_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_package__srv__SayName_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_package__srv__SayName_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
