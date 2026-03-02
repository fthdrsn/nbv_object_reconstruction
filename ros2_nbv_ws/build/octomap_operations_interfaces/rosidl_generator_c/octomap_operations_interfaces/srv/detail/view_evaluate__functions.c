// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from octomap_operations_interfaces:srv/ViewEvaluate.idl
// generated code does not contain a copyright notice
#include "octomap_operations_interfaces/srv/detail/view_evaluate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ig_method`
#include "rosidl_runtime_c/string_functions.h"
// Member `view_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
octomap_operations_interfaces__srv__ViewEvaluate_Request__init(octomap_operations_interfaces__srv__ViewEvaluate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ig_method
  if (!rosidl_runtime_c__String__init(&msg->ig_method)) {
    octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(msg);
    return false;
  }
  // view_list
  if (!rosidl_runtime_c__float__Sequence__init(&msg->view_list, 0)) {
    octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(msg);
    return false;
  }
  // run_parallel
  return true;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(octomap_operations_interfaces__srv__ViewEvaluate_Request * msg)
{
  if (!msg) {
    return;
  }
  // ig_method
  rosidl_runtime_c__String__fini(&msg->ig_method);
  // view_list
  rosidl_runtime_c__float__Sequence__fini(&msg->view_list);
  // run_parallel
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Request__are_equal(const octomap_operations_interfaces__srv__ViewEvaluate_Request * lhs, const octomap_operations_interfaces__srv__ViewEvaluate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ig_method
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ig_method), &(rhs->ig_method)))
  {
    return false;
  }
  // view_list
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->view_list), &(rhs->view_list)))
  {
    return false;
  }
  // run_parallel
  if (lhs->run_parallel != rhs->run_parallel) {
    return false;
  }
  return true;
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Request__copy(
  const octomap_operations_interfaces__srv__ViewEvaluate_Request * input,
  octomap_operations_interfaces__srv__ViewEvaluate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ig_method
  if (!rosidl_runtime_c__String__copy(
      &(input->ig_method), &(output->ig_method)))
  {
    return false;
  }
  // view_list
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->view_list), &(output->view_list)))
  {
    return false;
  }
  // run_parallel
  output->run_parallel = input->run_parallel;
  return true;
}

octomap_operations_interfaces__srv__ViewEvaluate_Request *
octomap_operations_interfaces__srv__ViewEvaluate_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Request * msg = (octomap_operations_interfaces__srv__ViewEvaluate_Request *)allocator.allocate(sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Request));
  bool success = octomap_operations_interfaces__srv__ViewEvaluate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Request__destroy(octomap_operations_interfaces__srv__ViewEvaluate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__init(octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Request * data = NULL;

  if (size) {
    data = (octomap_operations_interfaces__srv__ViewEvaluate_Request *)allocator.zero_allocate(size, sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_operations_interfaces__srv__ViewEvaluate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__fini(octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * array = (octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence *)allocator.allocate(sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__destroy(octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__are_equal(const octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * lhs, const octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!octomap_operations_interfaces__srv__ViewEvaluate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__copy(
  const octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * input,
  octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    octomap_operations_interfaces__srv__ViewEvaluate_Request * data =
      (octomap_operations_interfaces__srv__ViewEvaluate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!octomap_operations_interfaces__srv__ViewEvaluate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          octomap_operations_interfaces__srv__ViewEvaluate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!octomap_operations_interfaces__srv__ViewEvaluate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `view_igs`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
octomap_operations_interfaces__srv__ViewEvaluate_Response__init(octomap_operations_interfaces__srv__ViewEvaluate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // view_igs
  if (!rosidl_runtime_c__float__Sequence__init(&msg->view_igs, 0)) {
    octomap_operations_interfaces__srv__ViewEvaluate_Response__fini(msg);
    return false;
  }
  // elapsed_time
  return true;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Response__fini(octomap_operations_interfaces__srv__ViewEvaluate_Response * msg)
{
  if (!msg) {
    return;
  }
  // view_igs
  rosidl_runtime_c__float__Sequence__fini(&msg->view_igs);
  // elapsed_time
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Response__are_equal(const octomap_operations_interfaces__srv__ViewEvaluate_Response * lhs, const octomap_operations_interfaces__srv__ViewEvaluate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // view_igs
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->view_igs), &(rhs->view_igs)))
  {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  return true;
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Response__copy(
  const octomap_operations_interfaces__srv__ViewEvaluate_Response * input,
  octomap_operations_interfaces__srv__ViewEvaluate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // view_igs
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->view_igs), &(output->view_igs)))
  {
    return false;
  }
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  return true;
}

octomap_operations_interfaces__srv__ViewEvaluate_Response *
octomap_operations_interfaces__srv__ViewEvaluate_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Response * msg = (octomap_operations_interfaces__srv__ViewEvaluate_Response *)allocator.allocate(sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Response));
  bool success = octomap_operations_interfaces__srv__ViewEvaluate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Response__destroy(octomap_operations_interfaces__srv__ViewEvaluate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    octomap_operations_interfaces__srv__ViewEvaluate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__init(octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Response * data = NULL;

  if (size) {
    data = (octomap_operations_interfaces__srv__ViewEvaluate_Response *)allocator.zero_allocate(size, sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_operations_interfaces__srv__ViewEvaluate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_operations_interfaces__srv__ViewEvaluate_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__fini(octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_operations_interfaces__srv__ViewEvaluate_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * array = (octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence *)allocator.allocate(sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__destroy(octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__are_equal(const octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * lhs, const octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!octomap_operations_interfaces__srv__ViewEvaluate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__copy(
  const octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * input,
  octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    octomap_operations_interfaces__srv__ViewEvaluate_Response * data =
      (octomap_operations_interfaces__srv__ViewEvaluate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!octomap_operations_interfaces__srv__ViewEvaluate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          octomap_operations_interfaces__srv__ViewEvaluate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!octomap_operations_interfaces__srv__ViewEvaluate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "octomap_operations_interfaces/srv/detail/view_evaluate__functions.h"

bool
octomap_operations_interfaces__srv__ViewEvaluate_Event__init(octomap_operations_interfaces__srv__ViewEvaluate_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(msg);
    return false;
  }
  // request
  if (!octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__init(&msg->request, 0)) {
    octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(msg);
    return false;
  }
  // response
  if (!octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__init(&msg->response, 0)) {
    octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(msg);
    return false;
  }
  return true;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(octomap_operations_interfaces__srv__ViewEvaluate_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__fini(&msg->request);
  // response
  octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__fini(&msg->response);
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Event__are_equal(const octomap_operations_interfaces__srv__ViewEvaluate_Event * lhs, const octomap_operations_interfaces__srv__ViewEvaluate_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Event__copy(
  const octomap_operations_interfaces__srv__ViewEvaluate_Event * input,
  octomap_operations_interfaces__srv__ViewEvaluate_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!octomap_operations_interfaces__srv__ViewEvaluate_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!octomap_operations_interfaces__srv__ViewEvaluate_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

octomap_operations_interfaces__srv__ViewEvaluate_Event *
octomap_operations_interfaces__srv__ViewEvaluate_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Event * msg = (octomap_operations_interfaces__srv__ViewEvaluate_Event *)allocator.allocate(sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Event));
  bool success = octomap_operations_interfaces__srv__ViewEvaluate_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Event__destroy(octomap_operations_interfaces__srv__ViewEvaluate_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__init(octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Event * data = NULL;

  if (size) {
    data = (octomap_operations_interfaces__srv__ViewEvaluate_Event *)allocator.zero_allocate(size, sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_operations_interfaces__srv__ViewEvaluate_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__fini(octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence *
octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * array = (octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence *)allocator.allocate(sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__destroy(octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__are_equal(const octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * lhs, const octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!octomap_operations_interfaces__srv__ViewEvaluate_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence__copy(
  const octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * input,
  octomap_operations_interfaces__srv__ViewEvaluate_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(octomap_operations_interfaces__srv__ViewEvaluate_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    octomap_operations_interfaces__srv__ViewEvaluate_Event * data =
      (octomap_operations_interfaces__srv__ViewEvaluate_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!octomap_operations_interfaces__srv__ViewEvaluate_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          octomap_operations_interfaces__srv__ViewEvaluate_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!octomap_operations_interfaces__srv__ViewEvaluate_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
