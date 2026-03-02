// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from octomap_operations_interfaces:srv/FocusPoint.idl
// generated code does not contain a copyright notice

#include "octomap_operations_interfaces/srv/detail/focus_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__FocusPoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0xe6, 0x71, 0x50, 0xdd, 0x64, 0x06, 0xe1,
      0x9b, 0x8b, 0x0a, 0xa0, 0xf6, 0xa1, 0xc7, 0xb1,
      0xbe, 0xf7, 0xf1, 0x81, 0x60, 0xcc, 0x98, 0x6c,
      0x48, 0x94, 0xb1, 0x16, 0x6e, 0xe9, 0x54, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__FocusPoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x78, 0xb7, 0xf5, 0x7e, 0xdd, 0x91, 0x5e,
      0x0e, 0xeb, 0x83, 0x3d, 0xb5, 0xa7, 0x87, 0x0f,
      0xc7, 0x8a, 0xbb, 0x07, 0x07, 0x31, 0x0e, 0x65,
      0x8d, 0x7e, 0x34, 0x47, 0x24, 0x1f, 0xb0, 0xac,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__FocusPoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x29, 0xc4, 0x39, 0xcb, 0x55, 0x7b, 0x10,
      0xb8, 0x6b, 0xf0, 0x11, 0x65, 0xd9, 0x31, 0x84,
      0xee, 0x79, 0x6a, 0x51, 0xb2, 0xde, 0x7d, 0x1c,
      0x55, 0x3c, 0x41, 0xcc, 0x82, 0xeb, 0x46, 0xc3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__FocusPoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x3e, 0xf4, 0x56, 0x3d, 0x0f, 0xca, 0x24,
      0x7a, 0x31, 0x94, 0x4c, 0xd9, 0x41, 0x50, 0x23,
      0x91, 0xd7, 0x50, 0x90, 0x68, 0x2b, 0x36, 0x85,
      0x1f, 0xbc, 0x36, 0x72, 0x5b, 0xca, 0x39, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char octomap_operations_interfaces__srv__FocusPoint__TYPE_NAME[] = "octomap_operations_interfaces/srv/FocusPoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char octomap_operations_interfaces__srv__FocusPoint_Event__TYPE_NAME[] = "octomap_operations_interfaces/srv/FocusPoint_Event";
static char octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME[] = "octomap_operations_interfaces/srv/FocusPoint_Request";
static char octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME[] = "octomap_operations_interfaces/srv/FocusPoint_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__FocusPoint__FIELD_NAME__request_message[] = "request_message";
static char octomap_operations_interfaces__srv__FocusPoint__FIELD_NAME__response_message[] = "response_message";
static char octomap_operations_interfaces__srv__FocusPoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__FocusPoint__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__FocusPoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {octomap_operations_interfaces__srv__FocusPoint_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription octomap_operations_interfaces__srv__FocusPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
octomap_operations_interfaces__srv__FocusPoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__FocusPoint__TYPE_NAME, 44, 44},
      {octomap_operations_interfaces__srv__FocusPoint__FIELDS, 3, 3},
    },
    {octomap_operations_interfaces__srv__FocusPoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__FocusPoint_Request__FIELD_NAME__pose[] = "pose";
static char octomap_operations_interfaces__srv__FocusPoint_Request__FIELD_NAME__run_parallel[] = "run_parallel";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__FocusPoint_Request__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__FocusPoint_Request__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Request__FIELD_NAME__run_parallel, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME, 52, 52},
      {octomap_operations_interfaces__srv__FocusPoint_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__FocusPoint_Response__FIELD_NAME__focus_pnt[] = "focus_pnt";
static char octomap_operations_interfaces__srv__FocusPoint_Response__FIELD_NAME__elapsed_time[] = "elapsed_time";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__FocusPoint_Response__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__FocusPoint_Response__FIELD_NAME__focus_pnt, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Response__FIELD_NAME__elapsed_time, 12, 12},
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
octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME, 53, 53},
      {octomap_operations_interfaces__srv__FocusPoint_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__FocusPoint_Event__FIELD_NAME__info[] = "info";
static char octomap_operations_interfaces__srv__FocusPoint_Event__FIELD_NAME__request[] = "request";
static char octomap_operations_interfaces__srv__FocusPoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__FocusPoint_Event__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__FocusPoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription octomap_operations_interfaces__srv__FocusPoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__FocusPoint_Event__TYPE_NAME, 50, 50},
      {octomap_operations_interfaces__srv__FocusPoint_Event__FIELDS, 3, 3},
    },
    {octomap_operations_interfaces__srv__FocusPoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[] pose\n"
  "bool run_parallel\n"
  "---\n"
  "float32[] focus_pnt\n"
  "float32 elapsed_time";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__FocusPoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__FocusPoint__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 77, 77},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__FocusPoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__FocusPoint_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__FocusPoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__FocusPoint_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__FocusPoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__FocusPoint_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__FocusPoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__FocusPoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *octomap_operations_interfaces__srv__FocusPoint_Event__get_individual_type_description_source(NULL);
    sources[3] = *octomap_operations_interfaces__srv__FocusPoint_Request__get_individual_type_description_source(NULL);
    sources[4] = *octomap_operations_interfaces__srv__FocusPoint_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__FocusPoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__FocusPoint_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__FocusPoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__FocusPoint_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__FocusPoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__FocusPoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *octomap_operations_interfaces__srv__FocusPoint_Request__get_individual_type_description_source(NULL);
    sources[3] = *octomap_operations_interfaces__srv__FocusPoint_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
