// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlesim/srv/detail/teleport_absolute__struct.h"
#include "turtlesim/srv/detail/teleport_absolute__type_support.h"
#include "turtlesim/srv/detail/teleport_absolute__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TeleportAbsolute_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportAbsolute_Request_type_support_ids_t;

static const _TeleportAbsolute_Request_type_support_ids_t _TeleportAbsolute_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TeleportAbsolute_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportAbsolute_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportAbsolute_Request_type_support_symbol_names_t _TeleportAbsolute_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, TeleportAbsolute_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Request)),
  }
};

typedef struct _TeleportAbsolute_Request_type_support_data_t
{
  void * data[2];
} _TeleportAbsolute_Request_type_support_data_t;

static _TeleportAbsolute_Request_type_support_data_t _TeleportAbsolute_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportAbsolute_Request_message_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportAbsolute_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TeleportAbsolute_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TeleportAbsolute_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TeleportAbsolute_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportAbsolute_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Request__get_type_hash,
  &turtlesim__srv__TeleportAbsolute_Request__get_type_description,
  &turtlesim__srv__TeleportAbsolute_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, TeleportAbsolute_Request)() {
  return &::turtlesim::srv::rosidl_typesupport_c::TeleportAbsolute_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__type_support.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__functions.h"
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

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TeleportAbsolute_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportAbsolute_Response_type_support_ids_t;

static const _TeleportAbsolute_Response_type_support_ids_t _TeleportAbsolute_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TeleportAbsolute_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportAbsolute_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportAbsolute_Response_type_support_symbol_names_t _TeleportAbsolute_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, TeleportAbsolute_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Response)),
  }
};

typedef struct _TeleportAbsolute_Response_type_support_data_t
{
  void * data[2];
} _TeleportAbsolute_Response_type_support_data_t;

static _TeleportAbsolute_Response_type_support_data_t _TeleportAbsolute_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportAbsolute_Response_message_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportAbsolute_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TeleportAbsolute_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TeleportAbsolute_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TeleportAbsolute_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportAbsolute_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Response__get_type_hash,
  &turtlesim__srv__TeleportAbsolute_Response__get_type_description,
  &turtlesim__srv__TeleportAbsolute_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, TeleportAbsolute_Response)() {
  return &::turtlesim::srv::rosidl_typesupport_c::TeleportAbsolute_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__type_support.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__functions.h"
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

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _TeleportAbsolute_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportAbsolute_Event_type_support_ids_t;

static const _TeleportAbsolute_Event_type_support_ids_t _TeleportAbsolute_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TeleportAbsolute_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportAbsolute_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportAbsolute_Event_type_support_symbol_names_t _TeleportAbsolute_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, TeleportAbsolute_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Event)),
  }
};

typedef struct _TeleportAbsolute_Event_type_support_data_t
{
  void * data[2];
} _TeleportAbsolute_Event_type_support_data_t;

static _TeleportAbsolute_Event_type_support_data_t _TeleportAbsolute_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportAbsolute_Event_message_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportAbsolute_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TeleportAbsolute_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TeleportAbsolute_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TeleportAbsolute_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportAbsolute_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Event__get_type_hash,
  &turtlesim__srv__TeleportAbsolute_Event__get_type_description,
  &turtlesim__srv__TeleportAbsolute_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, TeleportAbsolute_Event)() {
  return &::turtlesim::srv::rosidl_typesupport_c::TeleportAbsolute_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace turtlesim
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _TeleportAbsolute_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TeleportAbsolute_type_support_ids_t;

static const _TeleportAbsolute_type_support_ids_t _TeleportAbsolute_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TeleportAbsolute_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TeleportAbsolute_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TeleportAbsolute_type_support_symbol_names_t _TeleportAbsolute_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim, srv, TeleportAbsolute)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute)),
  }
};

typedef struct _TeleportAbsolute_type_support_data_t
{
  void * data[2];
} _TeleportAbsolute_type_support_data_t;

static _TeleportAbsolute_type_support_data_t _TeleportAbsolute_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TeleportAbsolute_service_typesupport_map = {
  2,
  "turtlesim",
  &_TeleportAbsolute_service_typesupport_ids.typesupport_identifier[0],
  &_TeleportAbsolute_service_typesupport_symbol_names.symbol_name[0],
  &_TeleportAbsolute_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TeleportAbsolute_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TeleportAbsolute_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TeleportAbsolute_Request_message_type_support_handle,
  &TeleportAbsolute_Response_message_type_support_handle,
  &TeleportAbsolute_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    turtlesim,
    srv,
    TeleportAbsolute
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    turtlesim,
    srv,
    TeleportAbsolute
  ),
  &turtlesim__srv__TeleportAbsolute__get_type_hash,
  &turtlesim__srv__TeleportAbsolute__get_type_description,
  &turtlesim__srv__TeleportAbsolute__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace turtlesim

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim, srv, TeleportAbsolute)() {
  return &::turtlesim::srv::rosidl_typesupport_c::TeleportAbsolute_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
