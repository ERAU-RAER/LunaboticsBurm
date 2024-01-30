// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/SerialRead.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/serial_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SerialRead_data
{
public:
  explicit Init_SerialRead_data(::custom_interfaces::msg::SerialRead & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::SerialRead data(::custom_interfaces::msg::SerialRead::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::SerialRead msg_;
};

class Init_SerialRead_identifier
{
public:
  Init_SerialRead_identifier()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SerialRead_data identifier(::custom_interfaces::msg::SerialRead::_identifier_type arg)
  {
    msg_.identifier = std::move(arg);
    return Init_SerialRead_data(msg_);
  }

private:
  ::custom_interfaces::msg::SerialRead msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::SerialRead>()
{
  return custom_interfaces::msg::builder::Init_SerialRead_identifier();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__BUILDER_HPP_
