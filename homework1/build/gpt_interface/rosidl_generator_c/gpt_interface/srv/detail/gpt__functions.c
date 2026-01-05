// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice
#include "gpt_interface/srv/detail/gpt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
gpt_interface__srv__GPT_Request__init(gpt_interface__srv__GPT_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    gpt_interface__srv__GPT_Request__fini(msg);
    return false;
  }
  return true;
}

void
gpt_interface__srv__GPT_Request__fini(gpt_interface__srv__GPT_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
gpt_interface__srv__GPT_Request__are_equal(const gpt_interface__srv__GPT_Request * lhs, const gpt_interface__srv__GPT_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
gpt_interface__srv__GPT_Request__copy(
  const gpt_interface__srv__GPT_Request * input,
  gpt_interface__srv__GPT_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

gpt_interface__srv__GPT_Request *
gpt_interface__srv__GPT_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpt_interface__srv__GPT_Request * msg = (gpt_interface__srv__GPT_Request *)allocator.allocate(sizeof(gpt_interface__srv__GPT_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpt_interface__srv__GPT_Request));
  bool success = gpt_interface__srv__GPT_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpt_interface__srv__GPT_Request__destroy(gpt_interface__srv__GPT_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpt_interface__srv__GPT_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpt_interface__srv__GPT_Request__Sequence__init(gpt_interface__srv__GPT_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpt_interface__srv__GPT_Request * data = NULL;

  if (size) {
    data = (gpt_interface__srv__GPT_Request *)allocator.zero_allocate(size, sizeof(gpt_interface__srv__GPT_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpt_interface__srv__GPT_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpt_interface__srv__GPT_Request__fini(&data[i - 1]);
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
gpt_interface__srv__GPT_Request__Sequence__fini(gpt_interface__srv__GPT_Request__Sequence * array)
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
      gpt_interface__srv__GPT_Request__fini(&array->data[i]);
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

gpt_interface__srv__GPT_Request__Sequence *
gpt_interface__srv__GPT_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpt_interface__srv__GPT_Request__Sequence * array = (gpt_interface__srv__GPT_Request__Sequence *)allocator.allocate(sizeof(gpt_interface__srv__GPT_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpt_interface__srv__GPT_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpt_interface__srv__GPT_Request__Sequence__destroy(gpt_interface__srv__GPT_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpt_interface__srv__GPT_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpt_interface__srv__GPT_Request__Sequence__are_equal(const gpt_interface__srv__GPT_Request__Sequence * lhs, const gpt_interface__srv__GPT_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpt_interface__srv__GPT_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpt_interface__srv__GPT_Request__Sequence__copy(
  const gpt_interface__srv__GPT_Request__Sequence * input,
  gpt_interface__srv__GPT_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpt_interface__srv__GPT_Request);
    gpt_interface__srv__GPT_Request * data =
      (gpt_interface__srv__GPT_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpt_interface__srv__GPT_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gpt_interface__srv__GPT_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpt_interface__srv__GPT_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gpt_interface__srv__GPT_Response__init(gpt_interface__srv__GPT_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
gpt_interface__srv__GPT_Response__fini(gpt_interface__srv__GPT_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
gpt_interface__srv__GPT_Response__are_equal(const gpt_interface__srv__GPT_Response * lhs, const gpt_interface__srv__GPT_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
gpt_interface__srv__GPT_Response__copy(
  const gpt_interface__srv__GPT_Response * input,
  gpt_interface__srv__GPT_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

gpt_interface__srv__GPT_Response *
gpt_interface__srv__GPT_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpt_interface__srv__GPT_Response * msg = (gpt_interface__srv__GPT_Response *)allocator.allocate(sizeof(gpt_interface__srv__GPT_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gpt_interface__srv__GPT_Response));
  bool success = gpt_interface__srv__GPT_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gpt_interface__srv__GPT_Response__destroy(gpt_interface__srv__GPT_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gpt_interface__srv__GPT_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gpt_interface__srv__GPT_Response__Sequence__init(gpt_interface__srv__GPT_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpt_interface__srv__GPT_Response * data = NULL;

  if (size) {
    data = (gpt_interface__srv__GPT_Response *)allocator.zero_allocate(size, sizeof(gpt_interface__srv__GPT_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gpt_interface__srv__GPT_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gpt_interface__srv__GPT_Response__fini(&data[i - 1]);
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
gpt_interface__srv__GPT_Response__Sequence__fini(gpt_interface__srv__GPT_Response__Sequence * array)
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
      gpt_interface__srv__GPT_Response__fini(&array->data[i]);
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

gpt_interface__srv__GPT_Response__Sequence *
gpt_interface__srv__GPT_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gpt_interface__srv__GPT_Response__Sequence * array = (gpt_interface__srv__GPT_Response__Sequence *)allocator.allocate(sizeof(gpt_interface__srv__GPT_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gpt_interface__srv__GPT_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gpt_interface__srv__GPT_Response__Sequence__destroy(gpt_interface__srv__GPT_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gpt_interface__srv__GPT_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gpt_interface__srv__GPT_Response__Sequence__are_equal(const gpt_interface__srv__GPT_Response__Sequence * lhs, const gpt_interface__srv__GPT_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gpt_interface__srv__GPT_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gpt_interface__srv__GPT_Response__Sequence__copy(
  const gpt_interface__srv__GPT_Response__Sequence * input,
  gpt_interface__srv__GPT_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gpt_interface__srv__GPT_Response);
    gpt_interface__srv__GPT_Response * data =
      (gpt_interface__srv__GPT_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gpt_interface__srv__GPT_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          gpt_interface__srv__GPT_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gpt_interface__srv__GPT_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
