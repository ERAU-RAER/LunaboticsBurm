// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim/srv/detail/teleport_absolute__rosidl_typesupport_introspection_c.h"
#include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim/srv/detail/teleport_absolute__functions.h"
#include "turtlesim/srv/detail/teleport_absolute__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__TeleportAbsolute_Request__init(message_memory);
}

void turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_fini_function(void * message_memory)
{
  turtlesim__srv__TeleportAbsolute_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Request, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_members = {
  "turtlesim__srv",  // message namespace
  "TeleportAbsolute_Request",  // message name
  3,  // number of fields
  sizeof(turtlesim__srv__TeleportAbsolute_Request),
  turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_member_array,  // message members
  turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_type_support_handle = {
  0,
  &turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_members,
  get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Request__get_type_hash,
  &turtlesim__srv__TeleportAbsolute_Request__get_type_description,
  &turtlesim__srv__TeleportAbsolute_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Request)() {
  if (!turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_type_support_handle.typesupport_identifier) {
    turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__TeleportAbsolute_Response__init(message_memory);
}

void turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_fini_function(void * message_memory)
{
  turtlesim__srv__TeleportAbsolute_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_members = {
  "turtlesim__srv",  // message namespace
  "TeleportAbsolute_Response",  // message name
  1,  // number of fields
  sizeof(turtlesim__srv__TeleportAbsolute_Response),
  turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_member_array,  // message members
  turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle = {
  0,
  &turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_members,
  get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Response__get_type_hash,
  &turtlesim__srv__TeleportAbsolute_Response__get_type_description,
  &turtlesim__srv__TeleportAbsolute_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Response)() {
  if (!turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle.typesupport_identifier) {
    turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__functions.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "turtlesim/srv/teleport_absolute.h"
// Member `request`
// Member `response`
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim__srv__TeleportAbsolute_Event__init(message_memory);
}

void turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_fini_function(void * message_memory)
{
  turtlesim__srv__TeleportAbsolute_Event__fini(message_memory);
}

size_t turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__size_function__TeleportAbsolute_Event__request(
  const void * untyped_member)
{
  const turtlesim__srv__TeleportAbsolute_Request__Sequence * member =
    (const turtlesim__srv__TeleportAbsolute_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_const_function__TeleportAbsolute_Event__request(
  const void * untyped_member, size_t index)
{
  const turtlesim__srv__TeleportAbsolute_Request__Sequence * member =
    (const turtlesim__srv__TeleportAbsolute_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_function__TeleportAbsolute_Event__request(
  void * untyped_member, size_t index)
{
  turtlesim__srv__TeleportAbsolute_Request__Sequence * member =
    (turtlesim__srv__TeleportAbsolute_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__fetch_function__TeleportAbsolute_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const turtlesim__srv__TeleportAbsolute_Request * item =
    ((const turtlesim__srv__TeleportAbsolute_Request *)
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_const_function__TeleportAbsolute_Event__request(untyped_member, index));
  turtlesim__srv__TeleportAbsolute_Request * value =
    (turtlesim__srv__TeleportAbsolute_Request *)(untyped_value);
  *value = *item;
}

void turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__assign_function__TeleportAbsolute_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  turtlesim__srv__TeleportAbsolute_Request * item =
    ((turtlesim__srv__TeleportAbsolute_Request *)
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_function__TeleportAbsolute_Event__request(untyped_member, index));
  const turtlesim__srv__TeleportAbsolute_Request * value =
    (const turtlesim__srv__TeleportAbsolute_Request *)(untyped_value);
  *item = *value;
}

bool turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__resize_function__TeleportAbsolute_Event__request(
  void * untyped_member, size_t size)
{
  turtlesim__srv__TeleportAbsolute_Request__Sequence * member =
    (turtlesim__srv__TeleportAbsolute_Request__Sequence *)(untyped_member);
  turtlesim__srv__TeleportAbsolute_Request__Sequence__fini(member);
  return turtlesim__srv__TeleportAbsolute_Request__Sequence__init(member, size);
}

size_t turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__size_function__TeleportAbsolute_Event__response(
  const void * untyped_member)
{
  const turtlesim__srv__TeleportAbsolute_Response__Sequence * member =
    (const turtlesim__srv__TeleportAbsolute_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_const_function__TeleportAbsolute_Event__response(
  const void * untyped_member, size_t index)
{
  const turtlesim__srv__TeleportAbsolute_Response__Sequence * member =
    (const turtlesim__srv__TeleportAbsolute_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_function__TeleportAbsolute_Event__response(
  void * untyped_member, size_t index)
{
  turtlesim__srv__TeleportAbsolute_Response__Sequence * member =
    (turtlesim__srv__TeleportAbsolute_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__fetch_function__TeleportAbsolute_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const turtlesim__srv__TeleportAbsolute_Response * item =
    ((const turtlesim__srv__TeleportAbsolute_Response *)
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_const_function__TeleportAbsolute_Event__response(untyped_member, index));
  turtlesim__srv__TeleportAbsolute_Response * value =
    (turtlesim__srv__TeleportAbsolute_Response *)(untyped_value);
  *value = *item;
}

void turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__assign_function__TeleportAbsolute_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  turtlesim__srv__TeleportAbsolute_Response * item =
    ((turtlesim__srv__TeleportAbsolute_Response *)
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_function__TeleportAbsolute_Event__response(untyped_member, index));
  const turtlesim__srv__TeleportAbsolute_Response * value =
    (const turtlesim__srv__TeleportAbsolute_Response *)(untyped_value);
  *item = *value;
}

bool turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__resize_function__TeleportAbsolute_Event__response(
  void * untyped_member, size_t size)
{
  turtlesim__srv__TeleportAbsolute_Response__Sequence * member =
    (turtlesim__srv__TeleportAbsolute_Response__Sequence *)(untyped_member);
  turtlesim__srv__TeleportAbsolute_Response__Sequence__fini(member);
  return turtlesim__srv__TeleportAbsolute_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Event, request),  // bytes offset in struct
    NULL,  // default value
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__size_function__TeleportAbsolute_Event__request,  // size() function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_const_function__TeleportAbsolute_Event__request,  // get_const(index) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_function__TeleportAbsolute_Event__request,  // get(index) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__fetch_function__TeleportAbsolute_Event__request,  // fetch(index, &value) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__assign_function__TeleportAbsolute_Event__request,  // assign(index, value) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__resize_function__TeleportAbsolute_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(turtlesim__srv__TeleportAbsolute_Event, response),  // bytes offset in struct
    NULL,  // default value
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__size_function__TeleportAbsolute_Event__response,  // size() function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_const_function__TeleportAbsolute_Event__response,  // get_const(index) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__get_function__TeleportAbsolute_Event__response,  // get(index) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__fetch_function__TeleportAbsolute_Event__response,  // fetch(index, &value) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__assign_function__TeleportAbsolute_Event__response,  // assign(index, value) function pointer
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__resize_function__TeleportAbsolute_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_members = {
  "turtlesim__srv",  // message namespace
  "TeleportAbsolute_Event",  // message name
  3,  // number of fields
  sizeof(turtlesim__srv__TeleportAbsolute_Event),
  turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_member_array,  // message members
  turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_type_support_handle = {
  0,
  &turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_members,
  get_message_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Event__get_type_hash,
  &turtlesim__srv__TeleportAbsolute_Event__get_type_description,
  &turtlesim__srv__TeleportAbsolute_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Event)() {
  turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Request)();
  turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Response)();
  if (!turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_type_support_handle.typesupport_identifier) {
    turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtlesim/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtlesim/srv/detail/teleport_absolute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_members = {
  "turtlesim__srv",  // service namespace
  "TeleportAbsolute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_type_support_handle,
  NULL,  // response message
  // turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle
  NULL  // event_message
  // turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle
};


static rosidl_service_type_support_t turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_type_support_handle = {
  0,
  &turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_members,
  get_service_typesupport_handle_function,
  &turtlesim__srv__TeleportAbsolute_Request__rosidl_typesupport_introspection_c__TeleportAbsolute_Request_message_type_support_handle,
  &turtlesim__srv__TeleportAbsolute_Response__rosidl_typesupport_introspection_c__TeleportAbsolute_Response_message_type_support_handle,
  &turtlesim__srv__TeleportAbsolute_Event__rosidl_typesupport_introspection_c__TeleportAbsolute_Event_message_type_support_handle,
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

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute)() {
  if (!turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_type_support_handle.typesupport_identifier) {
    turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim, srv, TeleportAbsolute_Event)()->data;
  }

  return &turtlesim__srv__detail__teleport_absolute__rosidl_typesupport_introspection_c__TeleportAbsolute_service_type_support_handle;
}
