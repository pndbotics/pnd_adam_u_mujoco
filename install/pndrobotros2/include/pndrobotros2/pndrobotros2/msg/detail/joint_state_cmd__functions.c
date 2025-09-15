// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice
#include "pndrobotros2/msg/detail/joint_state_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `q_d`
// Member `q_dot_d`
// Member `tau_d`
// Member `hands_d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pndrobotros2__msg__JointStateCmd__init(pndrobotros2__msg__JointStateCmd * msg)
{
  if (!msg) {
    return false;
  }
  // q_d
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q_d, 0)) {
    pndrobotros2__msg__JointStateCmd__fini(msg);
    return false;
  }
  // q_dot_d
  if (!rosidl_runtime_c__double__Sequence__init(&msg->q_dot_d, 0)) {
    pndrobotros2__msg__JointStateCmd__fini(msg);
    return false;
  }
  // tau_d
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tau_d, 0)) {
    pndrobotros2__msg__JointStateCmd__fini(msg);
    return false;
  }
  // hands_d
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->hands_d, 0)) {
    pndrobotros2__msg__JointStateCmd__fini(msg);
    return false;
  }
  return true;
}

void
pndrobotros2__msg__JointStateCmd__fini(pndrobotros2__msg__JointStateCmd * msg)
{
  if (!msg) {
    return;
  }
  // q_d
  rosidl_runtime_c__double__Sequence__fini(&msg->q_d);
  // q_dot_d
  rosidl_runtime_c__double__Sequence__fini(&msg->q_dot_d);
  // tau_d
  rosidl_runtime_c__double__Sequence__fini(&msg->tau_d);
  // hands_d
  rosidl_runtime_c__int32__Sequence__fini(&msg->hands_d);
}

bool
pndrobotros2__msg__JointStateCmd__are_equal(const pndrobotros2__msg__JointStateCmd * lhs, const pndrobotros2__msg__JointStateCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q_d
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->q_d), &(rhs->q_d)))
  {
    return false;
  }
  // q_dot_d
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->q_dot_d), &(rhs->q_dot_d)))
  {
    return false;
  }
  // tau_d
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->tau_d), &(rhs->tau_d)))
  {
    return false;
  }
  // hands_d
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->hands_d), &(rhs->hands_d)))
  {
    return false;
  }
  return true;
}

bool
pndrobotros2__msg__JointStateCmd__copy(
  const pndrobotros2__msg__JointStateCmd * input,
  pndrobotros2__msg__JointStateCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // q_d
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->q_d), &(output->q_d)))
  {
    return false;
  }
  // q_dot_d
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->q_dot_d), &(output->q_dot_d)))
  {
    return false;
  }
  // tau_d
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->tau_d), &(output->tau_d)))
  {
    return false;
  }
  // hands_d
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->hands_d), &(output->hands_d)))
  {
    return false;
  }
  return true;
}

pndrobotros2__msg__JointStateCmd *
pndrobotros2__msg__JointStateCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pndrobotros2__msg__JointStateCmd * msg = (pndrobotros2__msg__JointStateCmd *)allocator.allocate(sizeof(pndrobotros2__msg__JointStateCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pndrobotros2__msg__JointStateCmd));
  bool success = pndrobotros2__msg__JointStateCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pndrobotros2__msg__JointStateCmd__destroy(pndrobotros2__msg__JointStateCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pndrobotros2__msg__JointStateCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pndrobotros2__msg__JointStateCmd__Sequence__init(pndrobotros2__msg__JointStateCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pndrobotros2__msg__JointStateCmd * data = NULL;

  if (size) {
    data = (pndrobotros2__msg__JointStateCmd *)allocator.zero_allocate(size, sizeof(pndrobotros2__msg__JointStateCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pndrobotros2__msg__JointStateCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pndrobotros2__msg__JointStateCmd__fini(&data[i - 1]);
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
pndrobotros2__msg__JointStateCmd__Sequence__fini(pndrobotros2__msg__JointStateCmd__Sequence * array)
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
      pndrobotros2__msg__JointStateCmd__fini(&array->data[i]);
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

pndrobotros2__msg__JointStateCmd__Sequence *
pndrobotros2__msg__JointStateCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pndrobotros2__msg__JointStateCmd__Sequence * array = (pndrobotros2__msg__JointStateCmd__Sequence *)allocator.allocate(sizeof(pndrobotros2__msg__JointStateCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pndrobotros2__msg__JointStateCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pndrobotros2__msg__JointStateCmd__Sequence__destroy(pndrobotros2__msg__JointStateCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pndrobotros2__msg__JointStateCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pndrobotros2__msg__JointStateCmd__Sequence__are_equal(const pndrobotros2__msg__JointStateCmd__Sequence * lhs, const pndrobotros2__msg__JointStateCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pndrobotros2__msg__JointStateCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pndrobotros2__msg__JointStateCmd__Sequence__copy(
  const pndrobotros2__msg__JointStateCmd__Sequence * input,
  pndrobotros2__msg__JointStateCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pndrobotros2__msg__JointStateCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pndrobotros2__msg__JointStateCmd * data =
      (pndrobotros2__msg__JointStateCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pndrobotros2__msg__JointStateCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pndrobotros2__msg__JointStateCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pndrobotros2__msg__JointStateCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
