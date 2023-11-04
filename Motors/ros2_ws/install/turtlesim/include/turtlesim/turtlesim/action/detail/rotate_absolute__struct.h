// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim:action/RotateAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_H_
#define TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_Goal
{
  float theta;
} turtlesim__action__RotateAbsolute_Goal;

// Struct for a sequence of turtlesim__action__RotateAbsolute_Goal.
typedef struct turtlesim__action__RotateAbsolute_Goal__Sequence
{
  turtlesim__action__RotateAbsolute_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_Result
{
  float delta;
} turtlesim__action__RotateAbsolute_Result;

// Struct for a sequence of turtlesim__action__RotateAbsolute_Result.
typedef struct turtlesim__action__RotateAbsolute_Result__Sequence
{
  turtlesim__action__RotateAbsolute_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_Feedback
{
  float remaining;
} turtlesim__action__RotateAbsolute_Feedback;

// Struct for a sequence of turtlesim__action__RotateAbsolute_Feedback.
typedef struct turtlesim__action__RotateAbsolute_Feedback__Sequence
{
  turtlesim__action__RotateAbsolute_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtlesim/action/detail/rotate_absolute__struct.h"

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlesim__action__RotateAbsolute_Goal goal;
} turtlesim__action__RotateAbsolute_SendGoal_Request;

// Struct for a sequence of turtlesim__action__RotateAbsolute_SendGoal_Request.
typedef struct turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence
{
  turtlesim__action__RotateAbsolute_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtlesim__action__RotateAbsolute_SendGoal_Response;

// Struct for a sequence of turtlesim__action__RotateAbsolute_SendGoal_Response.
typedef struct turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence
{
  turtlesim__action__RotateAbsolute_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim__action__RotateAbsolute_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim__action__RotateAbsolute_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim__action__RotateAbsolute_SendGoal_Request__Sequence request;
  turtlesim__action__RotateAbsolute_SendGoal_Response__Sequence response;
} turtlesim__action__RotateAbsolute_SendGoal_Event;

// Struct for a sequence of turtlesim__action__RotateAbsolute_SendGoal_Event.
typedef struct turtlesim__action__RotateAbsolute_SendGoal_Event__Sequence
{
  turtlesim__action__RotateAbsolute_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtlesim__action__RotateAbsolute_GetResult_Request;

// Struct for a sequence of turtlesim__action__RotateAbsolute_GetResult_Request.
typedef struct turtlesim__action__RotateAbsolute_GetResult_Request__Sequence
{
  turtlesim__action__RotateAbsolute_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_GetResult_Response
{
  int8_t status;
  turtlesim__action__RotateAbsolute_Result result;
} turtlesim__action__RotateAbsolute_GetResult_Response;

// Struct for a sequence of turtlesim__action__RotateAbsolute_GetResult_Response.
typedef struct turtlesim__action__RotateAbsolute_GetResult_Response__Sequence
{
  turtlesim__action__RotateAbsolute_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim__action__RotateAbsolute_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim__action__RotateAbsolute_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim__action__RotateAbsolute_GetResult_Request__Sequence request;
  turtlesim__action__RotateAbsolute_GetResult_Response__Sequence response;
} turtlesim__action__RotateAbsolute_GetResult_Event;

// Struct for a sequence of turtlesim__action__RotateAbsolute_GetResult_Event.
typedef struct turtlesim__action__RotateAbsolute_GetResult_Event__Sequence
{
  turtlesim__action__RotateAbsolute_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtlesim/action/detail/rotate_absolute__struct.h"

/// Struct defined in action/RotateAbsolute in the package turtlesim.
typedef struct turtlesim__action__RotateAbsolute_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlesim__action__RotateAbsolute_Feedback feedback;
} turtlesim__action__RotateAbsolute_FeedbackMessage;

// Struct for a sequence of turtlesim__action__RotateAbsolute_FeedbackMessage.
typedef struct turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence
{
  turtlesim__action__RotateAbsolute_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim__action__RotateAbsolute_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM__ACTION__DETAIL__ROTATE_ABSOLUTE__STRUCT_H_
