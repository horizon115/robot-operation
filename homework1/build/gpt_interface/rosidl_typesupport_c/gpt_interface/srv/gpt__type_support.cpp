// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gpt_interface/msg/rosidl_typesupport_c__visibility_control.h"
#include "gpt_interface/srv/detail/gpt__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gpt_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GPT_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPT_Request_type_support_ids_t;

static const _GPT_Request_type_support_ids_t _GPT_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GPT_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPT_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPT_Request_type_support_symbol_names_t _GPT_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpt_interface, srv, GPT_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpt_interface, srv, GPT_Request)),
  }
};

typedef struct _GPT_Request_type_support_data_t
{
  void * data[2];
} _GPT_Request_type_support_data_t;

static _GPT_Request_type_support_data_t _GPT_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPT_Request_message_typesupport_map = {
  2,
  "gpt_interface",
  &_GPT_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GPT_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GPT_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPT_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPT_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpt_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_gpt_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gpt_interface, srv, GPT_Request)() {
  return &::gpt_interface::srv::rosidl_typesupport_c::GPT_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gpt_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "gpt_interface/srv/detail/gpt__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpt_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GPT_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPT_Response_type_support_ids_t;

static const _GPT_Response_type_support_ids_t _GPT_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GPT_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPT_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPT_Response_type_support_symbol_names_t _GPT_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpt_interface, srv, GPT_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpt_interface, srv, GPT_Response)),
  }
};

typedef struct _GPT_Response_type_support_data_t
{
  void * data[2];
} _GPT_Response_type_support_data_t;

static _GPT_Response_type_support_data_t _GPT_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPT_Response_message_typesupport_map = {
  2,
  "gpt_interface",
  &_GPT_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GPT_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GPT_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GPT_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPT_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpt_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_gpt_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gpt_interface, srv, GPT_Response)() {
  return &::gpt_interface::srv::rosidl_typesupport_c::GPT_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gpt_interface/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gpt_interface
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GPT_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GPT_type_support_ids_t;

static const _GPT_type_support_ids_t _GPT_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GPT_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GPT_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GPT_type_support_symbol_names_t _GPT_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gpt_interface, srv, GPT)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gpt_interface, srv, GPT)),
  }
};

typedef struct _GPT_type_support_data_t
{
  void * data[2];
} _GPT_type_support_data_t;

static _GPT_type_support_data_t _GPT_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GPT_service_typesupport_map = {
  2,
  "gpt_interface",
  &_GPT_service_typesupport_ids.typesupport_identifier[0],
  &_GPT_service_typesupport_symbol_names.symbol_name[0],
  &_GPT_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GPT_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GPT_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gpt_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_gpt_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, gpt_interface, srv, GPT)() {
  return &::gpt_interface::srv::rosidl_typesupport_c::GPT_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
