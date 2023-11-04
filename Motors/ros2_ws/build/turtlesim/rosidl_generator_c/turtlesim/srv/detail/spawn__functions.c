// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim:srv/Spawn.idl
// generated code does not contain a copyright notice
#include "turtlesim/srv/detail/spawn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlesim__srv__Spawn_Request__init(turtlesim__srv__Spawn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim__srv__Spawn_Request__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__srv__Spawn_Request__fini(turtlesim__srv__Spawn_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
turtlesim__srv__Spawn_Request__are_equal(const turtlesim__srv__Spawn_Request * lhs, const turtlesim__srv__Spawn_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
turtlesim__srv__Spawn_Request__copy(
  const turtlesim__srv__Spawn_Request * input,
  turtlesim__srv__Spawn_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

turtlesim__srv__Spawn_Request *
turtlesim__srv__Spawn_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Request * msg = (turtlesim__srv__Spawn_Request *)allocator.allocate(sizeof(turtlesim__srv__Spawn_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__srv__Spawn_Request));
  bool success = turtlesim__srv__Spawn_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim__srv__Spawn_Request__destroy(turtlesim__srv__Spawn_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim__srv__Spawn_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim__srv__Spawn_Request__Sequence__init(turtlesim__srv__Spawn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Request * data = NULL;

  if (size) {
    data = (turtlesim__srv__Spawn_Request *)allocator.zero_allocate(size, sizeof(turtlesim__srv__Spawn_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__srv__Spawn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__srv__Spawn_Request__fini(&data[i - 1]);
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
turtlesim__srv__Spawn_Request__Sequence__fini(turtlesim__srv__Spawn_Request__Sequence * array)
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
      turtlesim__srv__Spawn_Request__fini(&array->data[i]);
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

turtlesim__srv__Spawn_Request__Sequence *
turtlesim__srv__Spawn_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Request__Sequence * array = (turtlesim__srv__Spawn_Request__Sequence *)allocator.allocate(sizeof(turtlesim__srv__Spawn_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__srv__Spawn_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim__srv__Spawn_Request__Sequence__destroy(turtlesim__srv__Spawn_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim__srv__Spawn_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim__srv__Spawn_Request__Sequence__are_equal(const turtlesim__srv__Spawn_Request__Sequence * lhs, const turtlesim__srv__Spawn_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim__srv__Spawn_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim__srv__Spawn_Request__Sequence__copy(
  const turtlesim__srv__Spawn_Request__Sequence * input,
  turtlesim__srv__Spawn_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim__srv__Spawn_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim__srv__Spawn_Request * data =
      (turtlesim__srv__Spawn_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim__srv__Spawn_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim__srv__Spawn_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim__srv__Spawn_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
turtlesim__srv__Spawn_Response__init(turtlesim__srv__Spawn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim__srv__Spawn_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__srv__Spawn_Response__fini(turtlesim__srv__Spawn_Response * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
turtlesim__srv__Spawn_Response__are_equal(const turtlesim__srv__Spawn_Response * lhs, const turtlesim__srv__Spawn_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
turtlesim__srv__Spawn_Response__copy(
  const turtlesim__srv__Spawn_Response * input,
  turtlesim__srv__Spawn_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

turtlesim__srv__Spawn_Response *
turtlesim__srv__Spawn_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Response * msg = (turtlesim__srv__Spawn_Response *)allocator.allocate(sizeof(turtlesim__srv__Spawn_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__srv__Spawn_Response));
  bool success = turtlesim__srv__Spawn_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim__srv__Spawn_Response__destroy(turtlesim__srv__Spawn_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim__srv__Spawn_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim__srv__Spawn_Response__Sequence__init(turtlesim__srv__Spawn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Response * data = NULL;

  if (size) {
    data = (turtlesim__srv__Spawn_Response *)allocator.zero_allocate(size, sizeof(turtlesim__srv__Spawn_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__srv__Spawn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__srv__Spawn_Response__fini(&data[i - 1]);
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
turtlesim__srv__Spawn_Response__Sequence__fini(turtlesim__srv__Spawn_Response__Sequence * array)
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
      turtlesim__srv__Spawn_Response__fini(&array->data[i]);
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

turtlesim__srv__Spawn_Response__Sequence *
turtlesim__srv__Spawn_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Response__Sequence * array = (turtlesim__srv__Spawn_Response__Sequence *)allocator.allocate(sizeof(turtlesim__srv__Spawn_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__srv__Spawn_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim__srv__Spawn_Response__Sequence__destroy(turtlesim__srv__Spawn_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim__srv__Spawn_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim__srv__Spawn_Response__Sequence__are_equal(const turtlesim__srv__Spawn_Response__Sequence * lhs, const turtlesim__srv__Spawn_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim__srv__Spawn_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim__srv__Spawn_Response__Sequence__copy(
  const turtlesim__srv__Spawn_Response__Sequence * input,
  turtlesim__srv__Spawn_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim__srv__Spawn_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim__srv__Spawn_Response * data =
      (turtlesim__srv__Spawn_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim__srv__Spawn_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim__srv__Spawn_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim__srv__Spawn_Response__copy(
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
// #include "turtlesim/srv/detail/spawn__functions.h"

bool
turtlesim__srv__Spawn_Event__init(turtlesim__srv__Spawn_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    turtlesim__srv__Spawn_Event__fini(msg);
    return false;
  }
  // request
  if (!turtlesim__srv__Spawn_Request__Sequence__init(&msg->request, 0)) {
    turtlesim__srv__Spawn_Event__fini(msg);
    return false;
  }
  // response
  if (!turtlesim__srv__Spawn_Response__Sequence__init(&msg->response, 0)) {
    turtlesim__srv__Spawn_Event__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim__srv__Spawn_Event__fini(turtlesim__srv__Spawn_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  turtlesim__srv__Spawn_Request__Sequence__fini(&msg->request);
  // response
  turtlesim__srv__Spawn_Response__Sequence__fini(&msg->response);
}

bool
turtlesim__srv__Spawn_Event__are_equal(const turtlesim__srv__Spawn_Event * lhs, const turtlesim__srv__Spawn_Event * rhs)
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
  if (!turtlesim__srv__Spawn_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!turtlesim__srv__Spawn_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
turtlesim__srv__Spawn_Event__copy(
  const turtlesim__srv__Spawn_Event * input,
  turtlesim__srv__Spawn_Event * output)
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
  if (!turtlesim__srv__Spawn_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!turtlesim__srv__Spawn_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

turtlesim__srv__Spawn_Event *
turtlesim__srv__Spawn_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Event * msg = (turtlesim__srv__Spawn_Event *)allocator.allocate(sizeof(turtlesim__srv__Spawn_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim__srv__Spawn_Event));
  bool success = turtlesim__srv__Spawn_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim__srv__Spawn_Event__destroy(turtlesim__srv__Spawn_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim__srv__Spawn_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim__srv__Spawn_Event__Sequence__init(turtlesim__srv__Spawn_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Event * data = NULL;

  if (size) {
    data = (turtlesim__srv__Spawn_Event *)allocator.zero_allocate(size, sizeof(turtlesim__srv__Spawn_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim__srv__Spawn_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim__srv__Spawn_Event__fini(&data[i - 1]);
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
turtlesim__srv__Spawn_Event__Sequence__fini(turtlesim__srv__Spawn_Event__Sequence * array)
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
      turtlesim__srv__Spawn_Event__fini(&array->data[i]);
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

turtlesim__srv__Spawn_Event__Sequence *
turtlesim__srv__Spawn_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim__srv__Spawn_Event__Sequence * array = (turtlesim__srv__Spawn_Event__Sequence *)allocator.allocate(sizeof(turtlesim__srv__Spawn_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim__srv__Spawn_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim__srv__Spawn_Event__Sequence__destroy(turtlesim__srv__Spawn_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim__srv__Spawn_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim__srv__Spawn_Event__Sequence__are_equal(const turtlesim__srv__Spawn_Event__Sequence * lhs, const turtlesim__srv__Spawn_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim__srv__Spawn_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim__srv__Spawn_Event__Sequence__copy(
  const turtlesim__srv__Spawn_Event__Sequence * input,
  turtlesim__srv__Spawn_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim__srv__Spawn_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim__srv__Spawn_Event * data =
      (turtlesim__srv__Spawn_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim__srv__Spawn_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim__srv__Spawn_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim__srv__Spawn_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
