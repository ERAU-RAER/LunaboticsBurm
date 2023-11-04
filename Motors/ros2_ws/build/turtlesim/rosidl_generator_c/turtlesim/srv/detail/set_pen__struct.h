// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__SRV__DETAIL__SET_PEN__STRUCT_H_
#define TURTLESIM__SRV__DETAIL__SET_PEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPen in the package turtlesim.
typedef struct turtlesim__srv__SetPen_Request
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t width;
  uint8_t off;
} turtlesim__srv__SetPen_Request;

// Struct for a sequence of turtlesim__srv__SetPen_Request.
typedef struct turtlesim__srv__SetPen_Request__Sequence
{
  turtlesim__srv__SetPen_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__SetPen_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetPen in the package turtlesim.
typedef struct turtlesim__srv__SetPen_Response
{
  uint8_t structure_needs_at_least_one_member;
} turtlesim__srv__SetPen_Response;

// Struct for a sequence of turtlesim__srv__SetPen_Response.
typedef struct turtlesim__srv__SetPen_Response__Sequence
{
  turtlesim__srv__SetPen_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__SetPen_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim__srv__SetPen_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim__srv__SetPen_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetPen in the package turtlesim.
typedef struct turtlesim__srv__SetPen_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim__srv__SetPen_Request__Sequence request;
  turtlesim__srv__SetPen_Response__Sequence response;
} turtlesim__srv__SetPen_Event;

// Struct for a sequence of turtlesim__srv__SetPen_Event.
typedef struct turtlesim__srv__SetPen_Event__Sequence
{
  turtlesim__srv__SetPen_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__srv__SetPen_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__SRV__DETAIL__SET_PEN__STRUCT_H_
