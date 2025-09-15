// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pndrobotros2:msg/Imu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pndrobotros2/msg/detail/imu__rosidl_typesupport_introspection_c.h"
#include "pndrobotros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pndrobotros2/msg/detail/imu__functions.h"
#include "pndrobotros2/msg/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pndrobotros2__msg__Imu__init(message_memory);
}

void pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_fini_function(void * message_memory)
{
  pndrobotros2__msg__Imu__fini(message_memory);
}

size_t pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__angular_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__angular_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__angular_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__angular_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__angular_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__linear_acceleration(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__linear_acceleration(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__linear_acceleration(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__linear_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__linear_acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__linear_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__linear_acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[5] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__Imu, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__Imu, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__Imu, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__Imu, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__angular_velocity,  // size() function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__angular_velocity,  // get_const(index) function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__angular_velocity,  // get(index) function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__angular_velocity,  // fetch(index, &value) function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__angular_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2__msg__Imu, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__size_function__Imu__linear_acceleration,  // size() function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_const_function__Imu__linear_acceleration,  // get_const(index) function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__get_function__Imu__linear_acceleration,  // get(index) function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__fetch_function__Imu__linear_acceleration,  // fetch(index, &value) function pointer
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__assign_function__Imu__linear_acceleration,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_members = {
  "pndrobotros2__msg",  // message namespace
  "Imu",  // message name
  5,  // number of fields
  sizeof(pndrobotros2__msg__Imu),
  pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_member_array,  // message members
  pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_init_function,  // function to initialize message memory (memory has to be allocated)
  pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle = {
  0,
  &pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pndrobotros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pndrobotros2, msg, Imu)() {
  if (!pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier) {
    pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pndrobotros2__msg__Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
