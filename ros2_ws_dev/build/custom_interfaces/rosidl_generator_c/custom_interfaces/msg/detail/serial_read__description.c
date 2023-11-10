// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/SerialRead.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/serial_read__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__SerialRead__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x8f, 0xe4, 0xbc, 0xbf, 0x13, 0x3f, 0x2f,
      0x15, 0x2f, 0x5f, 0x46, 0xe3, 0x28, 0x87, 0x93,
      0x9b, 0x19, 0xa4, 0xa0, 0x43, 0x6f, 0x75, 0x16,
      0x59, 0x9d, 0x96, 0xe6, 0xe6, 0xe9, 0x74, 0x9b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__SerialRead__TYPE_NAME[] = "custom_interfaces/msg/SerialRead";

// Define type names, field names, and default values
static char custom_interfaces__msg__SerialRead__FIELD_NAME__identifier[] = "identifier";
static char custom_interfaces__msg__SerialRead__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__SerialRead__FIELDS[] = {
  {
    {custom_interfaces__msg__SerialRead__FIELD_NAME__identifier, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__SerialRead__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BYTE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__SerialRead__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__SerialRead__TYPE_NAME, 32, 32},
      {custom_interfaces__msg__SerialRead__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string identifier\n"
  "byte[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__SerialRead__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__SerialRead__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__SerialRead__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__SerialRead__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
