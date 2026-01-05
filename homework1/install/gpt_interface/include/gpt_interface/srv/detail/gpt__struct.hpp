// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gpt_interface:srv/GPT.idl
// generated code does not contain a copyright notice

#ifndef GPT_INTERFACE__SRV__DETAIL__GPT__STRUCT_HPP_
#define GPT_INTERFACE__SRV__DETAIL__GPT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__gpt_interface__srv__GPT_Request __attribute__((deprecated))
#else
# define DEPRECATED__gpt_interface__srv__GPT_Request __declspec(deprecated)
#endif

namespace gpt_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GPT_Request_
{
  using Type = GPT_Request_<ContainerAllocator>;

  explicit GPT_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit GPT_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpt_interface::srv::GPT_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpt_interface::srv::GPT_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpt_interface::srv::GPT_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpt_interface::srv::GPT_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpt_interface__srv__GPT_Request
    std::shared_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpt_interface__srv__GPT_Request
    std::shared_ptr<gpt_interface::srv::GPT_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPT_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPT_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPT_Request_

// alias to use template instance with default allocator
using GPT_Request =
  gpt_interface::srv::GPT_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpt_interface


#ifndef _WIN32
# define DEPRECATED__gpt_interface__srv__GPT_Response __attribute__((deprecated))
#else
# define DEPRECATED__gpt_interface__srv__GPT_Response __declspec(deprecated)
#endif

namespace gpt_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GPT_Response_
{
  using Type = GPT_Response_<ContainerAllocator>;

  explicit GPT_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  explicit GPT_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = false;
    }
  }

  // field types and members
  using _res_type =
    bool;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const bool & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gpt_interface::srv::GPT_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gpt_interface::srv::GPT_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gpt_interface::srv::GPT_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gpt_interface::srv::GPT_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gpt_interface__srv__GPT_Response
    std::shared_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gpt_interface__srv__GPT_Response
    std::shared_ptr<gpt_interface::srv::GPT_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPT_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPT_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPT_Response_

// alias to use template instance with default allocator
using GPT_Response =
  gpt_interface::srv::GPT_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gpt_interface

namespace gpt_interface
{

namespace srv
{

struct GPT
{
  using Request = gpt_interface::srv::GPT_Request;
  using Response = gpt_interface::srv::GPT_Response;
};

}  // namespace srv

}  // namespace gpt_interface

#endif  // GPT_INTERFACE__SRV__DETAIL__GPT__STRUCT_HPP_
