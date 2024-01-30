// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/SerialRead.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__SerialRead __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__SerialRead __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialRead_
{
  using Type = SerialRead_<ContainerAllocator>;

  explicit SerialRead_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identifier = "";
    }
  }

  explicit SerialRead_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : identifier(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identifier = "";
    }
  }

  // field types and members
  using _identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _identifier_type identifier;
  using _data_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__identifier(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->identifier = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::SerialRead_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::SerialRead_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SerialRead_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::SerialRead_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__SerialRead
    std::shared_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__SerialRead
    std::shared_ptr<custom_interfaces::msg::SerialRead_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialRead_ & other) const
  {
    if (this->identifier != other.identifier) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialRead_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialRead_

// alias to use template instance with default allocator
using SerialRead =
  custom_interfaces::msg::SerialRead_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__STRUCT_HPP_
