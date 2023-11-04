// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_
#define TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim/srv/detail/teleport_absolute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_TeleportAbsolute_Request_theta
{
public:
  explicit Init_TeleportAbsolute_Request_theta(::turtlesim::srv::TeleportAbsolute_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::TeleportAbsolute_Request theta(::turtlesim::srv::TeleportAbsolute_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Request msg_;
};

class Init_TeleportAbsolute_Request_y
{
public:
  explicit Init_TeleportAbsolute_Request_y(::turtlesim::srv::TeleportAbsolute_Request & msg)
  : msg_(msg)
  {}
  Init_TeleportAbsolute_Request_theta y(::turtlesim::srv::TeleportAbsolute_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TeleportAbsolute_Request_theta(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Request msg_;
};

class Init_TeleportAbsolute_Request_x
{
public:
  Init_TeleportAbsolute_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportAbsolute_Request_y x(::turtlesim::srv::TeleportAbsolute_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TeleportAbsolute_Request_y(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportAbsolute_Request>()
{
  return turtlesim::srv::builder::Init_TeleportAbsolute_Request_x();
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
auto build<::turtlesim::srv::TeleportAbsolute_Response>()
{
  return ::turtlesim::srv::TeleportAbsolute_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim


namespace turtlesim
{

namespace srv
{

namespace builder
{

class Init_TeleportAbsolute_Event_response
{
public:
  explicit Init_TeleportAbsolute_Event_response(::turtlesim::srv::TeleportAbsolute_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim::srv::TeleportAbsolute_Event response(::turtlesim::srv::TeleportAbsolute_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Event msg_;
};

class Init_TeleportAbsolute_Event_request
{
public:
  explicit Init_TeleportAbsolute_Event_request(::turtlesim::srv::TeleportAbsolute_Event & msg)
  : msg_(msg)
  {}
  Init_TeleportAbsolute_Event_response request(::turtlesim::srv::TeleportAbsolute_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TeleportAbsolute_Event_response(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Event msg_;
};

class Init_TeleportAbsolute_Event_info
{
public:
  Init_TeleportAbsolute_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportAbsolute_Event_request info(::turtlesim::srv::TeleportAbsolute_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TeleportAbsolute_Event_request(msg_);
  }

private:
  ::turtlesim::srv::TeleportAbsolute_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim::srv::TeleportAbsolute_Event>()
{
  return turtlesim::srv::builder::Init_TeleportAbsolute_Event_info();
}

}  // namespace turtlesim

#endif  // TURTLESIM__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_
