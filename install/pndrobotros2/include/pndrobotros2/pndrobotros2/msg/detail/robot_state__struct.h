// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pndrobotros2:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'q_a'
// Member 'q_dot_a'
// Member 'tau_a'
// Member 'hands_a'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotState in the package pndrobotros2.
typedef struct pndrobotros2__msg__RobotState
{
  rosidl_runtime_c__double__Sequence q_a;
  rosidl_runtime_c__double__Sequence q_dot_a;
  rosidl_runtime_c__double__Sequence tau_a;
  rosidl_runtime_c__int32__Sequence hands_a;
} pndrobotros2__msg__RobotState;

// Struct for a sequence of pndrobotros2__msg__RobotState.
typedef struct pndrobotros2__msg__RobotState__Sequence
{
  pndrobotros2__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pndrobotros2__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
