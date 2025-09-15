// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pndrobotros2:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "pndrobotros2/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `q_a`
// Member `q_dot_a`
// Member `tau_a`
// Member `hands_a`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pndrobotros2__msg__RobotState__init(pndrobotros2__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // q_a
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q_a, 0)) {
    pndrobotros2__msg__RobotState__fini(msg);
    return false;
  }
  // q_dot_a
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q_dot_a, 0)) {
    pndrobotros2__msg__RobotState__fini(msg);
    return false;
  }
  // tau_a
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tau_a, 0)) {
    pndrobotros2__msg__RobotState__fini(msg);
    return false;
  }
  // hands_a
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->hands_a, 0)) {
    pndrobotros2__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
pndrobotros2__msg__RobotState__fini(pndrobotros2__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // q_a
  rosidl_runtime_c__double__Sequence__fini(&msg->q_a);
  // q_dot_a
  rosidl_runtime_c__double__Sequence__fini(&msg->q_dot_a);
  // tau_a
  rosidl_runtime_c__double__Sequence__fini(&msg->tau_a);
  // hands_a
  rosidl_runtime_c__int32__Sequence__fini(&msg->hands_a);
}

bool
pndrobotros2__msg__RobotState__are_equal(const pndrobotros2__msg__RobotState * lhs, const pndrobotros2__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q_a
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->q_a), &(rhs->q_a)))
  {
    return false;
  }
  // q_dot_a
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->q_dot_a), &(rhs->q_dot_a)))
  {
    return false;
  }
  // tau_a
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->tau_a), &(rhs->tau_a)))
  {
    return false;
  }
  // hands_a
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->hands_a), &(rhs->hands_a)))
  {
    return false;
  }
  return true;
}

bool
pndrobotros2__msg__RobotState__copy(
  const pndrobotros2__msg__RobotState * input,
  pndrobotros2__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // q_a
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->q_a), &(output->q_a)))
  {
    return false;
  }
  // q_dot_a
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->q_dot_a), &(output->q_dot_a)))
  {
    return false;
  }
  // tau_a
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->tau_a), &(output->tau_a)))
  {
    return false;
  }
  // hands_a
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->hands_a), &(output->hands_a)))
  {
    return false;
  }
  return true;
}

pndrobotros2__msg__RobotState *
pndrobotros2__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pndrobotros2__msg__RobotState * msg = (pndrobotros2__msg__RobotState *)allocator.allocate(sizeof(pndrobotros2__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pndrobotros2__msg__RobotState));
  bool success = pndrobotros2__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pndrobotros2__msg__RobotState__destroy(pndrobotros2__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pndrobotros2__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pndrobotros2__msg__RobotState__Sequence__init(pndrobotros2__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pndrobotros2__msg__RobotState * data = NULL;

  if (size) {
    data = (pndrobotros2__msg__RobotState *)allocator.zero_allocate(size, sizeof(pndrobotros2__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pndrobotros2__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pndrobotros2__msg__RobotState__fini(&data[i - 1]);
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
pndrobotros2__msg__RobotState__Sequence__fini(pndrobotros2__msg__RobotState__Sequence * array)
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
      pndrobotros2__msg__RobotState__fini(&array->data[i]);
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

pndrobotros2__msg__RobotState__Sequence *
pndrobotros2__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pndrobotros2__msg__RobotState__Sequence * array = (pndrobotros2__msg__RobotState__Sequence *)allocator.allocate(sizeof(pndrobotros2__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pndrobotros2__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pndrobotros2__msg__RobotState__Sequence__destroy(pndrobotros2__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pndrobotros2__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pndrobotros2__msg__RobotState__Sequence__are_equal(const pndrobotros2__msg__RobotState__Sequence * lhs, const pndrobotros2__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pndrobotros2__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pndrobotros2__msg__RobotState__Sequence__copy(
  const pndrobotros2__msg__RobotState__Sequence * input,
  pndrobotros2__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pndrobotros2__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pndrobotros2__msg__RobotState * data =
      (pndrobotros2__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pndrobotros2__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pndrobotros2__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pndrobotros2__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
