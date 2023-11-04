// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim/srv/detail/teleport_relative__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_TeleportRelative_Request_angular
{
public:
  explicit Init_TeleportRelative_Request_angular(::turtlesim::srv::TeleportRelative_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::TeleportRelative_Request angular(::turtlesim::srv::TeleportRelative_Request::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Request msg_;
};

class Init_TeleportRelative_Request_linear
{
public:
  Init_TeleportRelative_Request_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportRelative_Request_angular linear(::turtlesim::srv::TeleportRelative_Request::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_TeleportRelative_Request_angular(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportRelative_Request>()
{
  return turtlesim::srv::builder::Init_TeleportRelative_Request_linear();
}

}  // namespace turtlesim


namespace turtlesim
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportRelative_Response>()
{
  return ::turtlesim::srv::TeleportRelative_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_TeleportRelative_Event_response
{
public:
  explicit Init_TeleportRelative_Event_response(::turtlesim::srv::TeleportRelative_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::TeleportRelative_Event response(::turtlesim::srv::TeleportRelative_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Event msg_;
};

class Init_TeleportRelative_Event_request
{
public:
  explicit Init_TeleportRelative_Event_request(::turtlesim::srv::TeleportRelative_Event & msg)
  : msg_(msg)
  {}
  Init_TeleportRelative_Event_response request(::turtlesim::srv::TeleportRelative_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TeleportRelative_Event_response(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Event msg_;
};

class Init_TeleportRelative_Event_info
{
public:
  Init_TeleportRelative_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportRelative_Event_request info(::turtlesim::srv::TeleportRelative_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TeleportRelative_Event_request(msg_);
  }

private:
  ::turtlesim::srv::TeleportRelative_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportRelative_Event>()
{
  return turtlesim::srv::builder::Init_TeleportRelative_Event_info();
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
