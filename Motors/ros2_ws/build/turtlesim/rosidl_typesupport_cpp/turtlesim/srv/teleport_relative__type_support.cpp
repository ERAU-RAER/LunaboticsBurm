// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlesim/srv/detail/teleport_relative__functions.h"
#include "turtlesim/srv/detail/teleport_relative__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TeleportRelative_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportRelative_Request_type_support_ids_t;

static const _TeleportRelative_Request_type_support_ids_t _TeleportRelative_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TeleportRelative_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportRelative_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportRelative_Request_type_support_symbol_names_t _TeleportRelative_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, srv, TeleportRelative_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative_Request)),
  }
};

typedef struct _TeleportRelative_Request_type_support_data_t
{
  void * data[2];
} _TeleportRelative_Request_type_support_data_t;

static _TeleportRelative_Request_type_support_data_t _TeleportRelative_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportRelative_Request_message_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportRelative_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TeleportRelative_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TeleportRelative_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TeleportRelative_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportRelative_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportRelative_Request__get_type_hash,
  &turtlesim__srv__TeleportRelative_Request__get_type_description,
  &turtlesim__srv__TeleportRelative_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::srv::TeleportRelative_Request>()
{
  return &::turtlesim::srv::rosidl_typesupport_cpp::TeleportRelative_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, srv, TeleportRelative_Request)() {
  return get_message_type_support_handle<turtlesim::srv::TeleportRelative_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TeleportRelative_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportRelative_Response_type_support_ids_t;

static const _TeleportRelative_Response_type_support_ids_t _TeleportRelative_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TeleportRelative_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportRelative_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportRelative_Response_type_support_symbol_names_t _TeleportRelative_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, srv, TeleportRelative_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative_Response)),
  }
};

typedef struct _TeleportRelative_Response_type_support_data_t
{
  void * data[2];
} _TeleportRelative_Response_type_support_data_t;

static _TeleportRelative_Response_type_support_data_t _TeleportRelative_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportRelative_Response_message_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportRelative_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TeleportRelative_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TeleportRelative_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TeleportRelative_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportRelative_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportRelative_Response__get_type_hash,
  &turtlesim__srv__TeleportRelative_Response__get_type_description,
  &turtlesim__srv__TeleportRelative_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::srv::TeleportRelative_Response>()
{
  return &::turtlesim::srv::rosidl_typesupport_cpp::TeleportRelative_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, srv, TeleportRelative_Response)() {
  return get_message_type_support_handle<turtlesim::srv::TeleportRelative_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TeleportRelative_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportRelative_Event_type_support_ids_t;

static const _TeleportRelative_Event_type_support_ids_t _TeleportRelative_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TeleportRelative_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportRelative_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportRelative_Event_type_support_symbol_names_t _TeleportRelative_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, srv, TeleportRelative_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative_Event)),
  }
};

typedef struct _TeleportRelative_Event_type_support_data_t
{
  void * data[2];
} _TeleportRelative_Event_type_support_data_t;

static _TeleportRelative_Event_type_support_data_t _TeleportRelative_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportRelative_Event_message_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportRelative_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TeleportRelative_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TeleportRelative_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TeleportRelative_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportRelative_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportRelative_Event__get_type_hash,
  &turtlesim__srv__TeleportRelative_Event__get_type_description,
  &turtlesim__srv__TeleportRelative_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim::srv::TeleportRelative_Event>()
{
  return &::turtlesim::srv::rosidl_typesupport_cpp::TeleportRelative_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim, srv, TeleportRelative_Event)() {
  return get_message_type_support_handle<turtlesim::srv::TeleportRelative_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "turtlesim/srv/detail/teleport_relative__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _TeleportRelative_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportRelative_type_support_ids_t;

static const _TeleportRelative_type_support_ids_t _TeleportRelative_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _TeleportRelative_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportRelative_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportRelative_type_support_symbol_names_t _TeleportRelative_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim, srv, TeleportRelative)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim, srv, TeleportRelative)),
  }
};

typedef struct _TeleportRelative_type_support_data_t
{
  void * data[2];
} _TeleportRelative_type_support_data_t;

static _TeleportRelative_type_support_data_t _TeleportRelative_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportRelative_service_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportRelative_service_typesupport_ids.typesupport_identifier[0],
  &_TeleportRelative_service_typesupport_symbol_names.symbol_name[0],
  &_TeleportRelative_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TeleportRelative_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportRelative_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlesim::srv::TeleportRelative_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtlesim::srv::TeleportRelative>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtlesim::srv::TeleportRelative>,
  &turtlesim__srv__TeleportRelative__get_type_hash,
  &turtlesim__srv__TeleportRelative__get_type_description,
  &turtlesim__srv__TeleportRelative__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim::srv::TeleportRelative>()
{
  return &::turtlesim::srv::rosidl_typesupport_cpp::TeleportRelative_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
