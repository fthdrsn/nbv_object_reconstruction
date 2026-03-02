// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from octomap_operations_interfaces:srv/ViewEvaluate.idl
// generated code does not contain a copyright notice

#include "octomap_operations_interfaces/srv/detail/view_evaluate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__ViewEvaluate__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0x9c, 0x65, 0x0b, 0x13, 0xa2, 0x49, 0x92,
      0x38, 0x45, 0x54, 0x1b, 0x66, 0x6f, 0xd1, 0x89,
      0xa4, 0xfd, 0x1a, 0xc5, 0x80, 0xab, 0x03, 0x0f,
      0xac, 0x69, 0x10, 0xed, 0xf2, 0x97, 0x2d, 0x81,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__ViewEvaluate_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3f, 0x5e, 0x1d, 0xa6, 0xf9, 0x8b, 0x1f, 0x31,
      0x38, 0x33, 0xc1, 0xe5, 0xd6, 0xd1, 0x4c, 0x8f,
      0x47, 0x69, 0xfb, 0x35, 0xa6, 0x3e, 0xfb, 0xd9,
      0x65, 0xba, 0x1c, 0x78, 0x2d, 0xf9, 0x5c, 0xc9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__ViewEvaluate_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x12, 0x8f, 0x80, 0x01, 0x09, 0x42, 0x64,
      0x4c, 0x2a, 0xd6, 0xeb, 0x6e, 0xa0, 0xf6, 0x64,
      0x6e, 0x85, 0x9c, 0x9a, 0x37, 0xe7, 0x0a, 0xe6,
      0xc1, 0x32, 0x61, 0x7c, 0xcf, 0x25, 0xae, 0x42,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_octomap_operations_interfaces
const rosidl_type_hash_t *
octomap_operations_interfaces__srv__ViewEvaluate_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0x19, 0x8c, 0x15, 0xee, 0x37, 0x40, 0x7d,
      0xe9, 0x37, 0x8c, 0xff, 0x5f, 0x31, 0x50, 0x50,
      0x3e, 0x7f, 0xe7, 0xf5, 0xe1, 0xc2, 0xd5, 0x8c,
      0x8e, 0x77, 0x0d, 0x4a, 0xd3, 0x50, 0x6e, 0x72,
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

static char octomap_operations_interfaces__srv__ViewEvaluate__TYPE_NAME[] = "octomap_operations_interfaces/srv/ViewEvaluate";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char octomap_operations_interfaces__srv__ViewEvaluate_Event__TYPE_NAME[] = "octomap_operations_interfaces/srv/ViewEvaluate_Event";
static char octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME[] = "octomap_operations_interfaces/srv/ViewEvaluate_Request";
static char octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME[] = "octomap_operations_interfaces/srv/ViewEvaluate_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__ViewEvaluate__FIELD_NAME__request_message[] = "request_message";
static char octomap_operations_interfaces__srv__ViewEvaluate__FIELD_NAME__response_message[] = "response_message";
static char octomap_operations_interfaces__srv__ViewEvaluate__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__ViewEvaluate__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__ViewEvaluate__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {octomap_operations_interfaces__srv__ViewEvaluate_Event__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription octomap_operations_interfaces__srv__ViewEvaluate__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Event__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
octomap_operations_interfaces__srv__ViewEvaluate__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__ViewEvaluate__TYPE_NAME, 46, 46},
      {octomap_operations_interfaces__srv__ViewEvaluate__FIELDS, 3, 3},
    },
    {octomap_operations_interfaces__srv__ViewEvaluate__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = octomap_operations_interfaces__srv__ViewEvaluate_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = octomap_operations_interfaces__srv__ViewEvaluate_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = octomap_operations_interfaces__srv__ViewEvaluate_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELD_NAME__ig_method[] = "ig_method";
static char octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELD_NAME__view_list[] = "view_list";
static char octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELD_NAME__run_parallel[] = "run_parallel";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELD_NAME__ig_method, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELD_NAME__view_list, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELD_NAME__run_parallel, 12, 12},
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
octomap_operations_interfaces__srv__ViewEvaluate_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME, 54, 54},
      {octomap_operations_interfaces__srv__ViewEvaluate_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__ViewEvaluate_Response__FIELD_NAME__view_igs[] = "view_igs";
static char octomap_operations_interfaces__srv__ViewEvaluate_Response__FIELD_NAME__elapsed_time[] = "elapsed_time";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__ViewEvaluate_Response__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Response__FIELD_NAME__view_igs, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Response__FIELD_NAME__elapsed_time, 12, 12},
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
octomap_operations_interfaces__srv__ViewEvaluate_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME, 55, 55},
      {octomap_operations_interfaces__srv__ViewEvaluate_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELD_NAME__info[] = "info";
static char octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELD_NAME__request[] = "request";
static char octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELDS[] = {
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription octomap_operations_interfaces__srv__ViewEvaluate_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
octomap_operations_interfaces__srv__ViewEvaluate_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {octomap_operations_interfaces__srv__ViewEvaluate_Event__TYPE_NAME, 52, 52},
      {octomap_operations_interfaces__srv__ViewEvaluate_Event__FIELDS, 3, 3},
    },
    {octomap_operations_interfaces__srv__ViewEvaluate_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = octomap_operations_interfaces__srv__ViewEvaluate_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = octomap_operations_interfaces__srv__ViewEvaluate_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string ig_method\n"
  "float32[] view_list\n"
  "bool run_parallel\n"
  "---\n"
  "float32[] view_igs\n"
  "float32 elapsed_time";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__ViewEvaluate__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__ViewEvaluate__TYPE_NAME, 46, 46},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__ViewEvaluate_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__ViewEvaluate_Request__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__ViewEvaluate_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__ViewEvaluate_Response__TYPE_NAME, 55, 55},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
octomap_operations_interfaces__srv__ViewEvaluate_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {octomap_operations_interfaces__srv__ViewEvaluate_Event__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__ViewEvaluate__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *octomap_operations_interfaces__srv__ViewEvaluate_Event__get_individual_type_description_source(NULL);
    sources[3] = *octomap_operations_interfaces__srv__ViewEvaluate_Request__get_individual_type_description_source(NULL);
    sources[4] = *octomap_operations_interfaces__srv__ViewEvaluate_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__ViewEvaluate_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__ViewEvaluate_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *octomap_operations_interfaces__srv__ViewEvaluate_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *octomap_operations_interfaces__srv__ViewEvaluate_Request__get_individual_type_description_source(NULL);
    sources[3] = *octomap_operations_interfaces__srv__ViewEvaluate_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
