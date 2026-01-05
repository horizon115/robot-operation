// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice

#ifndef GPT_INTERFACE__SRV__DETAIL__GPT__TRAITS_HPP_
#define GPT_INTERFACE__SRV__DETAIL__GPT__TRAITS_HPP_

#include "gpt_interface/srv/detail/gpt__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpt_interface::srv::GPT_Request>()
{
  return "gpt_interface::srv::GPT_Request";
}

template<>
inline const char * name<gpt_interface::srv::GPT_Request>()
{
  return "gpt_interface/srv/GPT_Request";
}

template<>
struct has_fixed_size<gpt_interface::srv::GPT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gpt_interface::srv::GPT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gpt_interface::srv::GPT_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpt_interface::srv::GPT_Response>()
{
  return "gpt_interface::srv::GPT_Response";
}

template<>
inline const char * name<gpt_interface::srv::GPT_Response>()
{
  return "gpt_interface/srv/GPT_Response";
}

template<>
struct has_fixed_size<gpt_interface::srv::GPT_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gpt_interface::srv::GPT_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gpt_interface::srv::GPT_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gpt_interface::srv::GPT>()
{
  return "gpt_interface::srv::GPT";
}

template<>
inline const char * name<gpt_interface::srv::GPT>()
{
  return "gpt_interface/srv/GPT";
}

template<>
struct has_fixed_size<gpt_interface::srv::GPT>
  : std::integral_constant<
    bool,
    has_fixed_size<gpt_interface::srv::GPT_Request>::value &&
    has_fixed_size<gpt_interface::srv::GPT_Response>::value
  >
{
};

template<>
struct has_bounded_size<gpt_interface::srv::GPT>
  : std::integral_constant<
    bool,
    has_bounded_size<gpt_interface::srv::GPT_Request>::value &&
    has_bounded_size<gpt_interface::srv::GPT_Response>::value
  >
{
};

template<>
struct is_service<gpt_interface::srv::GPT>
  : std::true_type
{
};

template<>
struct is_service_request<gpt_interface::srv::GPT_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gpt_interface::srv::GPT_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GPT_INTERFACE__SRV__DETAIL__GPT__TRAITS_HPP_
