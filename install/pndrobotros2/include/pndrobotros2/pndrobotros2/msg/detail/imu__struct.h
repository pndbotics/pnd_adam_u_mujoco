// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pndrobotros2:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__IMU__STRUCT_H_
#define PNDROBOTROS2__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Imu in the package pndrobotros2.
typedef struct pndrobotros2__msg__Imu
{
  double yaw;
  double pitch;
  double roll;
  double angular_velocity[3];
  double linear_acceleration[3];
} pndrobotros2__msg__Imu;

// Struct for a sequence of pndrobotros2__msg__Imu.
typedef struct pndrobotros2__msg__Imu__Sequence
{
  pndrobotros2__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pndrobotros2__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PNDROBOTROS2__MSG__DETAIL__IMU__STRUCT_H_
