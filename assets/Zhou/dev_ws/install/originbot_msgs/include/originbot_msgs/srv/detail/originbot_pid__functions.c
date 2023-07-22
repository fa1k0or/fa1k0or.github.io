// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/srv/detail/originbot_pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
originbot_msgs__srv__OriginbotPID_Request__init(originbot_msgs__srv__OriginbotPID_Request * msg)
{
  if (!msg) {
    return false;
  }
  // p
  // i
  // d
  return true;
}

void
originbot_msgs__srv__OriginbotPID_Request__fini(originbot_msgs__srv__OriginbotPID_Request * msg)
{
  if (!msg) {
    return;
  }
  // p
  // i
  // d
}

originbot_msgs__srv__OriginbotPID_Request *
originbot_msgs__srv__OriginbotPID_Request__create()
{
  originbot_msgs__srv__OriginbotPID_Request * msg = (originbot_msgs__srv__OriginbotPID_Request *)malloc(sizeof(originbot_msgs__srv__OriginbotPID_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(originbot_msgs__srv__OriginbotPID_Request));
  bool success = originbot_msgs__srv__OriginbotPID_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
originbot_msgs__srv__OriginbotPID_Request__destroy(originbot_msgs__srv__OriginbotPID_Request * msg)
{
  if (msg) {
    originbot_msgs__srv__OriginbotPID_Request__fini(msg);
  }
  free(msg);
}


bool
originbot_msgs__srv__OriginbotPID_Request__Sequence__init(originbot_msgs__srv__OriginbotPID_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  originbot_msgs__srv__OriginbotPID_Request * data = NULL;
  if (size) {
    data = (originbot_msgs__srv__OriginbotPID_Request *)calloc(size, sizeof(originbot_msgs__srv__OriginbotPID_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = originbot_msgs__srv__OriginbotPID_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        originbot_msgs__srv__OriginbotPID_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
originbot_msgs__srv__OriginbotPID_Request__Sequence__fini(originbot_msgs__srv__OriginbotPID_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      originbot_msgs__srv__OriginbotPID_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

originbot_msgs__srv__OriginbotPID_Request__Sequence *
originbot_msgs__srv__OriginbotPID_Request__Sequence__create(size_t size)
{
  originbot_msgs__srv__OriginbotPID_Request__Sequence * array = (originbot_msgs__srv__OriginbotPID_Request__Sequence *)malloc(sizeof(originbot_msgs__srv__OriginbotPID_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = originbot_msgs__srv__OriginbotPID_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
originbot_msgs__srv__OriginbotPID_Request__Sequence__destroy(originbot_msgs__srv__OriginbotPID_Request__Sequence * array)
{
  if (array) {
    originbot_msgs__srv__OriginbotPID_Request__Sequence__fini(array);
  }
  free(array);
}


bool
originbot_msgs__srv__OriginbotPID_Response__init(originbot_msgs__srv__OriginbotPID_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
originbot_msgs__srv__OriginbotPID_Response__fini(originbot_msgs__srv__OriginbotPID_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

originbot_msgs__srv__OriginbotPID_Response *
originbot_msgs__srv__OriginbotPID_Response__create()
{
  originbot_msgs__srv__OriginbotPID_Response * msg = (originbot_msgs__srv__OriginbotPID_Response *)malloc(sizeof(originbot_msgs__srv__OriginbotPID_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(originbot_msgs__srv__OriginbotPID_Response));
  bool success = originbot_msgs__srv__OriginbotPID_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
originbot_msgs__srv__OriginbotPID_Response__destroy(originbot_msgs__srv__OriginbotPID_Response * msg)
{
  if (msg) {
    originbot_msgs__srv__OriginbotPID_Response__fini(msg);
  }
  free(msg);
}


bool
originbot_msgs__srv__OriginbotPID_Response__Sequence__init(originbot_msgs__srv__OriginbotPID_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  originbot_msgs__srv__OriginbotPID_Response * data = NULL;
  if (size) {
    data = (originbot_msgs__srv__OriginbotPID_Response *)calloc(size, sizeof(originbot_msgs__srv__OriginbotPID_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = originbot_msgs__srv__OriginbotPID_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        originbot_msgs__srv__OriginbotPID_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
originbot_msgs__srv__OriginbotPID_Response__Sequence__fini(originbot_msgs__srv__OriginbotPID_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      originbot_msgs__srv__OriginbotPID_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

originbot_msgs__srv__OriginbotPID_Response__Sequence *
originbot_msgs__srv__OriginbotPID_Response__Sequence__create(size_t size)
{
  originbot_msgs__srv__OriginbotPID_Response__Sequence * array = (originbot_msgs__srv__OriginbotPID_Response__Sequence *)malloc(sizeof(originbot_msgs__srv__OriginbotPID_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = originbot_msgs__srv__OriginbotPID_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
originbot_msgs__srv__OriginbotPID_Response__Sequence__destroy(originbot_msgs__srv__OriginbotPID_Response__Sequence * array)
{
  if (array) {
    originbot_msgs__srv__OriginbotPID_Response__Sequence__fini(array);
  }
  free(array);
}
