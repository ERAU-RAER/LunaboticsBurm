// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#include "turtlesim/srv/detail/teleport_relative__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportRelative__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x9e, 0x54, 0xcb, 0x05, 0xe1, 0xa7, 0x89,
      0xf9, 0x82, 0xbf, 0x8c, 0x93, 0xd2, 0x7f, 0xc8,
      0x99, 0xce, 0xe0, 0x99, 0x74, 0x6c, 0x4e, 0xa8,
      0xc7, 0xcb, 0x64, 0xe8, 0xa9, 0x02, 0x97, 0xd6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportRelative_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x5c, 0xd3, 0x6d, 0x9a, 0xda, 0xb1, 0xa6,
      0x59, 0x7e, 0x00, 0xf8, 0x31, 0x0a, 0x46, 0x08,
      0x2c, 0xbb, 0xf4, 0xdf, 0xca, 0x80, 0xf4, 0xa3,
      0x91, 0xbe, 0x1b, 0xdc, 0x0d, 0xfa, 0xdf, 0x33,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportRelative_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x29, 0xfd, 0x58, 0x03, 0x84, 0x77, 0x85,
      0xc3, 0xf0, 0x78, 0xde, 0x5a, 0x5d, 0x90, 0x0f,
      0x25, 0x1c, 0x89, 0x4d, 0xa3, 0x5e, 0x75, 0xef,
      0xa1, 0xb1, 0x03, 0x3e, 0xc5, 0x4f, 0x9b, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__TeleportRelative_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x24, 0x8d, 0xe3, 0x6b, 0x04, 0xab, 0x23,
      0x96, 0x45, 0xac, 0xab, 0x98, 0xa5, 0x7c, 0xfe,
      0x6e, 0xcc, 0xe5, 0x0f, 0x7e, 0xa4, 0x74, 0xec,
      0x3b, 0xdd, 0xfc, 0xb5, 0xb6, 0x95, 0x36, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char turtlesim__srv__TeleportRelative__TYPE_NAME[] = "turtlesim/srv/TeleportRelative";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtlesim__srv__TeleportRelative_Event__TYPE_NAME[] = "turtlesim/srv/TeleportRelative_Event";
static char turtlesim__srv__TeleportRelative_Request__TYPE_NAME[] = "turtlesim/srv/TeleportRelative_Request";
static char turtlesim__srv__TeleportRelative_Response__TYPE_NAME[] = "turtlesim/srv/TeleportRelative_Response";

// Define type names, field names, and default values
static char turtlesim__srv__TeleportRelative__FIELD_NAME__request_message[] = "request_message";
static char turtlesim__srv__TeleportRelative__FIELD_NAME__response_message[] = "response_message";
static char turtlesim__srv__TeleportRelative__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtlesim__srv__TeleportRelative__FIELDS[] = {
  {
    {turtlesim__srv__TeleportRelative__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__TeleportRelative_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__TeleportRelative_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__TeleportRelative_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim__srv__TeleportRelative__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__TeleportRelative__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__TeleportRelative__TYPE_NAME, 30, 30},
      {turtlesim__srv__TeleportRelative__FIELDS, 3, 3},
    },
    {turtlesim__srv__TeleportRelative__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim__srv__TeleportRelative_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim__srv__TeleportRelative_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtlesim__srv__TeleportRelative_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__TeleportRelative_Request__FIELD_NAME__linear[] = "linear";
static char turtlesim__srv__TeleportRelative_Request__FIELD_NAME__angular[] = "angular";

static rosidl_runtime_c__type_description__Field turtlesim__srv__TeleportRelative_Request__FIELDS[] = {
  {
    {turtlesim__srv__TeleportRelative_Request__FIELD_NAME__linear, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Request__FIELD_NAME__angular, 7, 7},
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
turtlesim__srv__TeleportRelative_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__TeleportRelative_Request__TYPE_NAME, 38, 38},
      {turtlesim__srv__TeleportRelative_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__TeleportRelative_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field turtlesim__srv__TeleportRelative_Response__FIELDS[] = {
  {
    {turtlesim__srv__TeleportRelative_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
turtlesim__srv__TeleportRelative_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__TeleportRelative_Response__TYPE_NAME, 39, 39},
      {turtlesim__srv__TeleportRelative_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__TeleportRelative_Event__FIELD_NAME__info[] = "info";
static char turtlesim__srv__TeleportRelative_Event__FIELD_NAME__request[] = "request";
static char turtlesim__srv__TeleportRelative_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtlesim__srv__TeleportRelative_Event__FIELDS[] = {
  {
    {turtlesim__srv__TeleportRelative_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim__srv__TeleportRelative_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim__srv__TeleportRelative_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim__srv__TeleportRelative_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__TeleportRelative_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__TeleportRelative_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__TeleportRelative_Event__TYPE_NAME, 36, 36},
      {turtlesim__srv__TeleportRelative_Event__FIELDS, 3, 3},
    },
    {turtlesim__srv__TeleportRelative_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim__srv__TeleportRelative_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim__srv__TeleportRelative_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 linear\n"
  "float32 angular\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportRelative__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__TeleportRelative__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportRelative_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__TeleportRelative_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportRelative_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__TeleportRelative_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__TeleportRelative_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__TeleportRelative_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportRelative__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__TeleportRelative__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim__srv__TeleportRelative_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim__srv__TeleportRelative_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtlesim__srv__TeleportRelative_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportRelative_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__TeleportRelative_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportRelative_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__TeleportRelative_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__TeleportRelative_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__TeleportRelative_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim__srv__TeleportRelative_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim__srv__TeleportRelative_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
