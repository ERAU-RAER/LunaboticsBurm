// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim:msg/Pose.idl
// generated code does not contain a copyright notice

#include "turtlesim/msg/detail/pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__msg__Pose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x9b, 0xeb, 0xa2, 0x6b, 0xcb, 0xa6, 0x92,
      0x04, 0x04, 0xba, 0x72, 0x2b, 0x7b, 0x83, 0x21,
      0x34, 0x85, 0x12, 0xf9, 0x2e, 0xa5, 0xbe, 0x23,
      0x5c, 0x47, 0x25, 0x19, 0x40, 0xdd, 0x8a, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char turtlesim__msg__Pose__TYPE_NAME[] = "turtlesim/msg/Pose";

// Define type names, field names, and default values
static char turtlesim__msg__Pose__FIELD_NAME__x[] = "x";
static char turtlesim__msg__Pose__FIELD_NAME__y[] = "y";
static char turtlesim__msg__Pose__FIELD_NAME__theta[] = "theta";
static char turtlesim__msg__Pose__FIELD_NAME__linear_velocity[] = "linear_velocity";
static char turtlesim__msg__Pose__FIELD_NAME__angular_velocity[] = "angular_velocity";

static rosidl_runtime_c__type_description__Field turtlesim__msg__Pose__FIELDS[] = {
  {
    {turtlesim__msg__Pose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Pose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Pose__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Pose__FIELD_NAME__linear_velocity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__msg__Pose__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__msg__Pose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__msg__Pose__TYPE_NAME, 18, 18},
      {turtlesim__msg__Pose__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 theta\n"
  "\n"
  "float32 linear_velocity\n"
  "float32 angular_velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__msg__Pose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__msg__Pose__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 83, 83},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__msg__Pose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__msg__Pose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
