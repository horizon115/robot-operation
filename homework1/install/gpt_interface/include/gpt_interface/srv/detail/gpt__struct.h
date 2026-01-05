// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice

#ifndef GPT_INTERFACE__SRV__DETAIL__GPT__STRUCT_H_
#define GPT_INTERFACE__SRV__DETAIL__GPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GPT in the package gpt_interface.
typedef struct gpt_interface__srv__GPT_Request
{
  rosidl_runtime_c__String data;
} gpt_interface__srv__GPT_Request;

// Struct for a sequence of gpt_interface__srv__GPT_Request.
typedef struct gpt_interface__srv__GPT_Request__Sequence
{
  gpt_interface__srv__GPT_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpt_interface__srv__GPT_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GPT in the package gpt_interface.
typedef struct gpt_interface__srv__GPT_Response
{
  bool res;
} gpt_interface__srv__GPT_Response;

// Struct for a sequence of gpt_interface__srv__GPT_Response.
typedef struct gpt_interface__srv__GPT_Response__Sequence
{
  gpt_interface__srv__GPT_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gpt_interface__srv__GPT_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPT_INTERFACE__SRV__DETAIL__GPT__STRUCT_H_
