// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__STRUCT_H_
#define PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'q_d'
// Member 'q_dot_d'
// Member 'tau_d'
// Member 'hands_d'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointStateCmd in the package pndrobotros2.
typedef struct pndrobotros2__msg__JointStateCmd
{
  rosidl_runtime_c__double__Sequence q_d;
  rosidl_runtime_c__double__Sequence q_dot_d;
  rosidl_runtime_c__double__Sequence tau_d;
  rosidl_runtime_c__int32__Sequence hands_d;
} pndrobotros2__msg__JointStateCmd;

// Struct for a sequence of pndrobotros2__msg__JointStateCmd.
typedef struct pndrobotros2__msg__JointStateCmd__Sequence
{
  pndrobotros2__msg__JointStateCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pndrobotros2__msg__JointStateCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__STRUCT_H_
