// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pndrobotros2:msg/RobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pndrobotros2/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
#include "pndrobotros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pndrobotros2/msg/detail/robot_state__functions.h"
#include "pndrobotros2/msg/detail/robot_state__struct.h"


// Include directives for member types
// Member `q_a`
// Member `q_dot_a`
// Member `tau_a`
// Member `hands_a`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pndrobotros2__msg__RobotState__init(message_memory);
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function(void * message_memory)
{
  pndrobotros2__msg__RobotState__fini(message_memory);
}

size_t pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__q_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__q_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__q_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__q_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__q_a(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__q_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__q_a(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__q_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__q_dot_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__q_dot_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__q_dot_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__q_dot_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__q_dot_a(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__q_dot_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__q_dot_a(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__q_dot_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__tau_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__tau_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__tau_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__tau_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__tau_a(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__tau_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__tau_a(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__tau_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__hands_a(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__hands_a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__hands_a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__hands_a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__hands_a(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__hands_a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__hands_a(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__hands_a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[4] = {
  {
    "q_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__RobotState, q_a),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__q_a,  // size() function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__q_a,  // get_const(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__q_a,  // get(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__q_a,  // fetch(index, &value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__q_a,  // assign(index, value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__q_a  // resize(index) function pointer
  },
  {
    "q_dot_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__RobotState, q_dot_a),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__q_dot_a,  // size() function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__q_dot_a,  // get_const(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__q_dot_a,  // get(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__q_dot_a,  // fetch(index, &value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__q_dot_a,  // assign(index, value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__q_dot_a  // resize(index) function pointer
  },
  {
    "tau_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__RobotState, tau_a),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__tau_a,  // size() function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__tau_a,  // get_const(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__tau_a,  // get(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__tau_a,  // fetch(index, &value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__tau_a,  // assign(index, value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__tau_a  // resize(index) function pointer
  },
  {
    "hands_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__RobotState, hands_a),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__hands_a,  // size() function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__hands_a,  // get_const(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__hands_a,  // get(index) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__hands_a,  // fetch(index, &value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__hands_a,  // assign(index, value) function pointer
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__hands_a  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members = {
  "pndrobotros2__msg",  // message namespace
  "RobotState",  // message name
  4,  // number of fields
  sizeof(pndrobotros2__msg__RobotState),
  pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array,  // message members
  pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle = {
  0,
  &pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pndrobotros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pndrobotros2, msg, RobotState)() {
  if (!pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier) {
    pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pndrobotros2__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
