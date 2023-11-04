// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice

#include "turtlesim/srv/detail/spawn__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__Spawn__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x1b, 0xe2, 0x48, 0x36, 0xf7, 0x72, 0xde,
      0xbd, 0x61, 0x87, 0xdc, 0x86, 0x18, 0xcc, 0x47,
      0x70, 0x0d, 0x26, 0x02, 0xc7, 0xa3, 0xe2, 0x22,
      0x8b, 0xad, 0x67, 0xa8, 0xf5, 0xfd, 0x27, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__Spawn_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x6a, 0xde, 0x26, 0x39, 0x54, 0x39, 0x52,
      0xce, 0x34, 0x71, 0xce, 0x7d, 0xf5, 0xa7, 0x5e,
      0xc6, 0x20, 0x40, 0xce, 0xbe, 0x60, 0xfc, 0xa7,
      0xc4, 0x9b, 0xe9, 0x6c, 0xab, 0x87, 0xe4, 0x7c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__Spawn_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x5d, 0xdd, 0x6e, 0x34, 0xad, 0x37, 0xa9,
      0x7f, 0x40, 0x92, 0xba, 0x04, 0x69, 0x3f, 0x83,
      0x84, 0xb3, 0xb2, 0x0e, 0xbd, 0xf7, 0xcc, 0x48,
      0x86, 0x0a, 0x39, 0xae, 0xde, 0xce, 0x80, 0x55,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__Spawn_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x4c, 0xc8, 0x4d, 0x77, 0x79, 0xe9, 0x67,
      0x4f, 0x6c, 0x7b, 0x9f, 0x0b, 0xd8, 0x5c, 0x49,
      0xaa, 0xfe, 0x37, 0xd9, 0xfa, 0x02, 0x07, 0x31,
      0xe5, 0x08, 0x16, 0x83, 0x56, 0xd0, 0x1e, 0xc1,
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

static char turtlesim__srv__Spawn__TYPE_NAME[] = "turtlesim/srv/Spawn";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtlesim__srv__Spawn_Event__TYPE_NAME[] = "turtlesim/srv/Spawn_Event";
static char turtlesim__srv__Spawn_Request__TYPE_NAME[] = "turtlesim/srv/Spawn_Request";
static char turtlesim__srv__Spawn_Response__TYPE_NAME[] = "turtlesim/srv/Spawn_Response";

// Define type names, field names, and default values
static char turtlesim__srv__Spawn__FIELD_NAME__request_message[] = "request_message";
static char turtlesim__srv__Spawn__FIELD_NAME__response_message[] = "response_message";
static char turtlesim__srv__Spawn__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtlesim__srv__Spawn__FIELDS[] = {
  {
    {turtlesim__srv__Spawn__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__Spawn_Request__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__Spawn_Response__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__Spawn_Event__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim__srv__Spawn__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Event__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Request__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Response__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__Spawn__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__Spawn__TYPE_NAME, 19, 19},
      {turtlesim__srv__Spawn__FIELDS, 3, 3},
    },
    {turtlesim__srv__Spawn__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim__srv__Spawn_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim__srv__Spawn_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtlesim__srv__Spawn_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__Spawn_Request__FIELD_NAME__x[] = "x";
static char turtlesim__srv__Spawn_Request__FIELD_NAME__y[] = "y";
static char turtlesim__srv__Spawn_Request__FIELD_NAME__theta[] = "theta";
static char turtlesim__srv__Spawn_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field turtlesim__srv__Spawn_Request__FIELDS[] = {
  {
    {turtlesim__srv__Spawn_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Request__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__Spawn_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__Spawn_Request__TYPE_NAME, 27, 27},
      {turtlesim__srv__Spawn_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__Spawn_Response__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field turtlesim__srv__Spawn_Response__FIELDS[] = {
  {
    {turtlesim__srv__Spawn_Response__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__Spawn_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__Spawn_Response__TYPE_NAME, 28, 28},
      {turtlesim__srv__Spawn_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__Spawn_Event__FIELD_NAME__info[] = "info";
static char turtlesim__srv__Spawn_Event__FIELD_NAME__request[] = "request";
static char turtlesim__srv__Spawn_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtlesim__srv__Spawn_Event__FIELDS[] = {
  {
    {turtlesim__srv__Spawn_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim__srv__Spawn_Request__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim__srv__Spawn_Response__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim__srv__Spawn_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Request__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__Spawn_Response__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__Spawn_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__Spawn_Event__TYPE_NAME, 25, 25},
      {turtlesim__srv__Spawn_Event__FIELDS, 3, 3},
    },
    {turtlesim__srv__Spawn_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim__srv__Spawn_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim__srv__Spawn_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "float32 theta\n"
  "string name # Optional.  A unique name will be created and returned if this is empty\n"
  "---\n"
  "string name";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__Spawn__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__Spawn__TYPE_NAME, 19, 19},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 134, 134},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__Spawn_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__Spawn_Request__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__Spawn_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__Spawn_Response__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__Spawn_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__Spawn_Event__TYPE_NAME, 25, 25},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__Spawn__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__Spawn__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim__srv__Spawn_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim__srv__Spawn_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtlesim__srv__Spawn_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__Spawn_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__Spawn_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__Spawn_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__Spawn_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__Spawn_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__Spawn_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim__srv__Spawn_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim__srv__Spawn_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
