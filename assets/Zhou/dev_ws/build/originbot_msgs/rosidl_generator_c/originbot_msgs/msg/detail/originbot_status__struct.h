// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__STRUCT_H_
#define ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OriginbotStatus in the package originbot_msgs.
typedef struct originbot_msgs__msg__OriginbotStatus
{
  float battery_voltage;
  bool buzzer_on;
  bool led_on;
} originbot_msgs__msg__OriginbotStatus;

// Struct for a sequence of originbot_msgs__msg__OriginbotStatus.
typedef struct originbot_msgs__msg__OriginbotStatus__Sequence
{
  originbot_msgs__msg__OriginbotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} originbot_msgs__msg__OriginbotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__STRUCT_H_
