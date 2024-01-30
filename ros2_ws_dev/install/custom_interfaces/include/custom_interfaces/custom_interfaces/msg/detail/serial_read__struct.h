// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SerialRead.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'identifier'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SerialRead in the package custom_interfaces.
typedef struct custom_interfaces__msg__SerialRead
{
  rosidl_runtime_c__String identifier;
  rosidl_runtime_c__octet__Sequence data;
} custom_interfaces__msg__SerialRead;

// Struct for a sequence of custom_interfaces__msg__SerialRead.
typedef struct custom_interfaces__msg__SerialRead__Sequence
{
  custom_interfaces__msg__SerialRead * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SerialRead__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SERIAL_READ__STRUCT_H_
