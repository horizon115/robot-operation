// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice

#ifndef GPT_INTERFACE__SRV__DETAIL__GPT__FUNCTIONS_H_
#define GPT_INTERFACE__SRV__DETAIL__GPT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gpt_interface/msg/rosidl_generator_c__visibility_control.h"

#include "gpt_interface/srv/detail/gpt__struct.h"

/// Initialize srv/GPT message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpt_interface__srv__GPT_Request
 * )) before or use
 * gpt_interface__srv__GPT_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Request__init(gpt_interface__srv__GPT_Request * msg);

/// Finalize srv/GPT message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Request__fini(gpt_interface__srv__GPT_Request * msg);

/// Create srv/GPT message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpt_interface__srv__GPT_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
gpt_interface__srv__GPT_Request *
gpt_interface__srv__GPT_Request__create();

/// Destroy srv/GPT message.
/**
 * It calls
 * gpt_interface__srv__GPT_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Request__destroy(gpt_interface__srv__GPT_Request * msg);

/// Check for srv/GPT message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Request__are_equal(const gpt_interface__srv__GPT_Request * lhs, const gpt_interface__srv__GPT_Request * rhs);

/// Copy a srv/GPT message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Request__copy(
  const gpt_interface__srv__GPT_Request * input,
  gpt_interface__srv__GPT_Request * output);

/// Initialize array of srv/GPT messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpt_interface__srv__GPT_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Request__Sequence__init(gpt_interface__srv__GPT_Request__Sequence * array, size_t size);

/// Finalize array of srv/GPT messages.
/**
 * It calls
 * gpt_interface__srv__GPT_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Request__Sequence__fini(gpt_interface__srv__GPT_Request__Sequence * array);

/// Create array of srv/GPT messages.
/**
 * It allocates the memory for the array and calls
 * gpt_interface__srv__GPT_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
gpt_interface__srv__GPT_Request__Sequence *
gpt_interface__srv__GPT_Request__Sequence__create(size_t size);

/// Destroy array of srv/GPT messages.
/**
 * It calls
 * gpt_interface__srv__GPT_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Request__Sequence__destroy(gpt_interface__srv__GPT_Request__Sequence * array);

/// Check for srv/GPT message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Request__Sequence__are_equal(const gpt_interface__srv__GPT_Request__Sequence * lhs, const gpt_interface__srv__GPT_Request__Sequence * rhs);

/// Copy an array of srv/GPT messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Request__Sequence__copy(
  const gpt_interface__srv__GPT_Request__Sequence * input,
  gpt_interface__srv__GPT_Request__Sequence * output);

/// Initialize srv/GPT message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gpt_interface__srv__GPT_Response
 * )) before or use
 * gpt_interface__srv__GPT_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Response__init(gpt_interface__srv__GPT_Response * msg);

/// Finalize srv/GPT message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Response__fini(gpt_interface__srv__GPT_Response * msg);

/// Create srv/GPT message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gpt_interface__srv__GPT_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
gpt_interface__srv__GPT_Response *
gpt_interface__srv__GPT_Response__create();

/// Destroy srv/GPT message.
/**
 * It calls
 * gpt_interface__srv__GPT_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Response__destroy(gpt_interface__srv__GPT_Response * msg);

/// Check for srv/GPT message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Response__are_equal(const gpt_interface__srv__GPT_Response * lhs, const gpt_interface__srv__GPT_Response * rhs);

/// Copy a srv/GPT message.
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
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Response__copy(
  const gpt_interface__srv__GPT_Response * input,
  gpt_interface__srv__GPT_Response * output);

/// Initialize array of srv/GPT messages.
/**
 * It allocates the memory for the number of elements and calls
 * gpt_interface__srv__GPT_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Response__Sequence__init(gpt_interface__srv__GPT_Response__Sequence * array, size_t size);

/// Finalize array of srv/GPT messages.
/**
 * It calls
 * gpt_interface__srv__GPT_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Response__Sequence__fini(gpt_interface__srv__GPT_Response__Sequence * array);

/// Create array of srv/GPT messages.
/**
 * It allocates the memory for the array and calls
 * gpt_interface__srv__GPT_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
gpt_interface__srv__GPT_Response__Sequence *
gpt_interface__srv__GPT_Response__Sequence__create(size_t size);

/// Destroy array of srv/GPT messages.
/**
 * It calls
 * gpt_interface__srv__GPT_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
void
gpt_interface__srv__GPT_Response__Sequence__destroy(gpt_interface__srv__GPT_Response__Sequence * array);

/// Check for srv/GPT message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Response__Sequence__are_equal(const gpt_interface__srv__GPT_Response__Sequence * lhs, const gpt_interface__srv__GPT_Response__Sequence * rhs);

/// Copy an array of srv/GPT messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gpt_interface
bool
gpt_interface__srv__GPT_Response__Sequence__copy(
  const gpt_interface__srv__GPT_Response__Sequence * input,
  gpt_interface__srv__GPT_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GPT_INTERFACE__SRV__DETAIL__GPT__FUNCTIONS_H_
