// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim:msg/Color.idl
// generated code does not contain a copyright notice

#include "turtlesim/msg/detail/color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__msg__Color__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x49, 0x25, 0x79, 0xec, 0x0d, 0x73, 0x47,
      0x07, 0xae, 0xde, 0x0e, 0x74, 0x2a, 0xb7, 0x6c,
      0x55, 0xac, 0x50, 0xd3, 0xff, 0x91, 0x73, 0x81,
      0xe5, 0x16, 0x36, 0x24, 0xcb, 0x65, 0x7f, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char turtlesim__msg__Color__TYPE_NAME[] = "turtlesim/msg/Color";

// Define type names, field names, and default values
static char turtlesim__msg__Color__FIELD_NAME__r[] = "r";
static char turtlesim__msg__Color__FIELD_NAME__g[] = "g";
static char turtlesim__msg__Color__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field turtlesim__msg__Color__FIELDS[] = {
  {
    {turtlesim__msg__Color__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Color__FIELD_NAME__g, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Color__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__msg__Color__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__msg__Color__TYPE_NAME, 19, 19},
      {turtlesim__msg__Color__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 r\n"
  "uint8 g\n"
  "uint8 b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__msg__Color__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__msg__Color__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__msg__Color__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__msg__Color__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
