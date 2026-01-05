// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice

#ifndef GPT_INTERFACE__SRV__DETAIL__GPT__BUILDER_HPP_
#define GPT_INTERFACE__SRV__DETAIL__GPT__BUILDER_HPP_

#include "gpt_interface/srv/detail/gpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace gpt_interface
{

namespace srv
{

namespace builder
{

class Init_GPT_Request_data
{
public:
  Init_GPT_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpt_interface::srv::GPT_Request data(::gpt_interface::srv::GPT_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpt_interface::srv::GPT_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpt_interface::srv::GPT_Request>()
{
  return gpt_interface::srv::builder::Init_GPT_Request_data();
}

}  // namespace gpt_interface


namespace gpt_interface
{

namespace srv
{

namespace builder
{

class Init_GPT_Response_res
{
public:
  Init_GPT_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gpt_interface::srv::GPT_Response res(::gpt_interface::srv::GPT_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gpt_interface::srv::GPT_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gpt_interface::srv::GPT_Response>()
{
  return gpt_interface::srv::builder::Init_GPT_Response_res();
}

}  // namespace gpt_interface

#endif  // GPT_INTERFACE__SRV__DETAIL__GPT__BUILDER_HPP_
