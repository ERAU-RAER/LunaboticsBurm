// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim:srv/Kill.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__KILL__TRAITS_HPP_
#define TURTLESIM__SRV__DETAIL__KILL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim/srv/detail/kill__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kill_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kill_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kill_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim::srv::Kill_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim::srv::Kill_Request & msg)
{
  return turtlesim::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim::srv::Kill_Request>()
{
  return "turtlesim::srv::Kill_Request";
}

template<>
inline const char * name<turtlesim::srv::Kill_Request>()
{
  return "turtlesim/srv/Kill_Request";
}

template<>
struct has_fixed_size<turtlesim::srv::Kill_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim::srv::Kill_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim::srv::Kill_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kill_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kill_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kill_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim::srv::Kill_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim::srv::Kill_Response & msg)
{
  return turtlesim::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim::srv::Kill_Response>()
{
  return "turtlesim::srv::Kill_Response";
}

template<>
inline const char * name<turtlesim::srv::Kill_Response>()
{
  return "turtlesim/srv/Kill_Response";
}

template<>
struct has_fixed_size<turtlesim::srv::Kill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim::srv::Kill_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim::srv::Kill_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace turtlesim
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kill_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kill_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kill_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim::srv::Kill_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim::srv::Kill_Event & msg)
{
  return turtlesim::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim::srv::Kill_Event>()
{
  return "turtlesim::srv::Kill_Event";
}

template<>
inline const char * name<turtlesim::srv::Kill_Event>()
{
  return "turtlesim/srv/Kill_Event";
}

template<>
struct has_fixed_size<turtlesim::srv::Kill_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim::srv::Kill_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<turtlesim::srv::Kill_Request>::value && has_bounded_size<turtlesim::srv::Kill_Response>::value> {};

template<>
struct is_message<turtlesim::srv::Kill_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim::srv::Kill>()
{
  return "turtlesim::srv::Kill";
}

template<>
inline const char * name<turtlesim::srv::Kill>()
{
  return "turtlesim/srv/Kill";
}

template<>
struct has_fixed_size<turtlesim::srv::Kill>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim::srv::Kill_Request>::value &&
    has_fixed_size<turtlesim::srv::Kill_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim::srv::Kill>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim::srv::Kill_Request>::value &&
    has_bounded_size<turtlesim::srv::Kill_Response>::value
  >
{
};

template<>
struct is_service<turtlesim::srv::Kill>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim::srv::Kill_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim::srv::Kill_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM__SRV__DETAIL__KILL__TRAITS_HPP_
