// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__FUNCTIONS_H_
#define PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pndrobotros2/msg/rosidl_generator_c__visibility_control.h"

#include "pndrobotros2/msg/detail/joint_state_cmd__struct.h"

/// Initialize msg/JointStateCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pndrobotros2__msg__JointStateCmd
 * )) before or use
 * pndrobotros2__msg__JointStateCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
bool
pndrobotros2__msg__JointStateCmd__init(pndrobotros2__msg__JointStateCmd * msg);

/// Finalize msg/JointStateCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
void
pndrobotros2__msg__JointStateCmd__fini(pndrobotros2__msg__JointStateCmd * msg);

/// Create msg/JointStateCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pndrobotros2__msg__JointStateCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
pndrobotros2__msg__JointStateCmd *
pndrobotros2__msg__JointStateCmd__create();

/// Destroy msg/JointStateCmd message.
/**
 * It calls
 * pndrobotros2__msg__JointStateCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
void
pndrobotros2__msg__JointStateCmd__destroy(pndrobotros2__msg__JointStateCmd * msg);

/// Check for msg/JointStateCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
bool
pndrobotros2__msg__JointStateCmd__are_equal(const pndrobotros2__msg__JointStateCmd * lhs, const pndrobotros2__msg__JointStateCmd * rhs);

/// Copy a msg/JointStateCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
bool
pndrobotros2__msg__JointStateCmd__copy(
  const pndrobotros2__msg__JointStateCmd * input,
  pndrobotros2__msg__JointStateCmd * output);

/// Initialize array of msg/JointStateCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * pndrobotros2__msg__JointStateCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
bool
pndrobotros2__msg__JointStateCmd__Sequence__init(pndrobotros2__msg__JointStateCmd__Sequence * array, size_t size);

/// Finalize array of msg/JointStateCmd messages.
/**
 * It calls
 * pndrobotros2__msg__JointStateCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
void
pndrobotros2__msg__JointStateCmd__Sequence__fini(pndrobotros2__msg__JointStateCmd__Sequence * array);

/// Create array of msg/JointStateCmd messages.
/**
 * It allocates the memory for the array and calls
 * pndrobotros2__msg__JointStateCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
pndrobotros2__msg__JointStateCmd__Sequence *
pndrobotros2__msg__JointStateCmd__Sequence__create(size_t size);

/// Destroy array of msg/JointStateCmd messages.
/**
 * It calls
 * pndrobotros2__msg__JointStateCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
void
pndrobotros2__msg__JointStateCmd__Sequence__destroy(pndrobotros2__msg__JointStateCmd__Sequence * array);

/// Check for msg/JointStateCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
bool
pndrobotros2__msg__JointStateCmd__Sequence__are_equal(const pndrobotros2__msg__JointStateCmd__Sequence * lhs, const pndrobotros2__msg__JointStateCmd__Sequence * rhs);

/// Copy an array of msg/JointStateCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pndrobotros2
bool
pndrobotros2__msg__JointStateCmd__Sequence__copy(
  const pndrobotros2__msg__JointStateCmd__Sequence * input,
  pndrobotros2__msg__JointStateCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__FUNCTIONS_H_
