// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pndrobotros2/msg/detail/joint_state_cmd__rosidl_typesupport_introspection_c.h"
#include "pndrobotros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pndrobotros2/msg/detail/joint_state_cmd__functions.h"
#include "pndrobotros2/msg/detail/joint_state_cmd__struct.h"


// Include directives for member types
// Member `q_d`
// Member `q_dot_d`
// Member `tau_d`
// Member `hands_d`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pndrobotros2__msg__JointStateCmd__init(message_memory);
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_fini_function(void * message_memory)
{
  pndrobotros2__msg__JointStateCmd__fini(message_memory);
}

size_t pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__q_d(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__q_d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__q_d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__q_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__q_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__q_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__q_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__q_d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__q_dot_d(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__q_dot_d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__q_dot_d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__q_dot_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__q_dot_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__q_dot_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__q_dot_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__q_dot_d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__tau_d(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__tau_d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__tau_d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__tau_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__tau_d(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__tau_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__tau_d(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__tau_d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__hands_d(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__hands_d(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__hands_d(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__hands_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__hands_d(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__hands_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__hands_d(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__hands_d(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_member_array[4] = {
  {
    "q_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__JointStateCmd, q_d),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__q_d,  // size() function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__q_d,  // get_const(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__q_d,  // get(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__q_d,  // fetch(index, &value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__q_d,  // assign(index, value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__q_d  // resize(index) function pointer
  },
  {
    "q_dot_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__JointStateCmd, q_dot_d),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__q_dot_d,  // size() function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__q_dot_d,  // get_const(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__q_dot_d,  // get(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__q_dot_d,  // fetch(index, &value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__q_dot_d,  // assign(index, value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__q_dot_d  // resize(index) function pointer
  },
  {
    "tau_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__JointStateCmd, tau_d),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__tau_d,  // size() function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__tau_d,  // get_const(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__tau_d,  // get(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__tau_d,  // fetch(index, &value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__tau_d,  // assign(index, value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__tau_d  // resize(index) function pointer
  },
  {
    "hands_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__JointStateCmd, hands_d),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__size_function__JointStateCmd__hands_d,  // size() function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_const_function__JointStateCmd__hands_d,  // get_const(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__get_function__JointStateCmd__hands_d,  // get(index) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__fetch_function__JointStateCmd__hands_d,  // fetch(index, &value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__assign_function__JointStateCmd__hands_d,  // assign(index, value) function pointer
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__resize_function__JointStateCmd__hands_d  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_members = {
  "pndrobotros2__msg",  // message namespace
  "JointStateCmd",  // message name
  4,  // number of fields
  sizeof(pndrobotros2__msg__JointStateCmd),
  pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_member_array,  // message members
  pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_type_support_handle = {
  0,
  &pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pndrobotros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pndrobotros2, msg, JointStateCmd)() {
  if (!pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_type_support_handle.typesupport_identifier) {
    pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pndrobotros2__msg__JointStateCmd__rosidl_typesupport_introspection_c__JointStateCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
