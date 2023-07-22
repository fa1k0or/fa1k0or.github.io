// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/msg/detail/originbot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
originbot_msgs__msg__OriginbotStatus__init(originbot_msgs__msg__OriginbotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // battery_voltage
  // buzzer_on
  // led_on
  return true;
}

void
originbot_msgs__msg__OriginbotStatus__fini(originbot_msgs__msg__OriginbotStatus * msg)
{
  if (!msg) {
    return;
  }
  // battery_voltage
  // buzzer_on
  // led_on
}

originbot_msgs__msg__OriginbotStatus *
originbot_msgs__msg__OriginbotStatus__create()
{
  originbot_msgs__msg__OriginbotStatus * msg = (originbot_msgs__msg__OriginbotStatus *)malloc(sizeof(originbot_msgs__msg__OriginbotStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(originbot_msgs__msg__OriginbotStatus));
  bool success = originbot_msgs__msg__OriginbotStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
originbot_msgs__msg__OriginbotStatus__destroy(originbot_msgs__msg__OriginbotStatus * msg)
{
  if (msg) {
    originbot_msgs__msg__OriginbotStatus__fini(msg);
  }
  free(msg);
}


bool
originbot_msgs__msg__OriginbotStatus__Sequence__init(originbot_msgs__msg__OriginbotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  originbot_msgs__msg__OriginbotStatus * data = NULL;
  if (size) {
    data = (originbot_msgs__msg__OriginbotStatus *)calloc(size, sizeof(originbot_msgs__msg__OriginbotStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = originbot_msgs__msg__OriginbotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        originbot_msgs__msg__OriginbotStatus__fini(&data[i - 1]);
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
originbot_msgs__msg__OriginbotStatus__Sequence__fini(originbot_msgs__msg__OriginbotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      originbot_msgs__msg__OriginbotStatus__fini(&array->data[i]);
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

originbot_msgs__msg__OriginbotStatus__Sequence *
originbot_msgs__msg__OriginbotStatus__Sequence__create(size_t size)
{
  originbot_msgs__msg__OriginbotStatus__Sequence * array = (originbot_msgs__msg__OriginbotStatus__Sequence *)malloc(sizeof(originbot_msgs__msg__OriginbotStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = originbot_msgs__msg__OriginbotStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
originbot_msgs__msg__OriginbotStatus__Sequence__destroy(originbot_msgs__msg__OriginbotStatus__Sequence * array)
{
  if (array) {
    originbot_msgs__msg__OriginbotStatus__Sequence__fini(array);
  }
  free(array);
}
