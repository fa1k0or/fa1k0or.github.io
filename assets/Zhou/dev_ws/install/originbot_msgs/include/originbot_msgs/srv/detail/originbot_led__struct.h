// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from originbot_msgs:srv/OriginbotLed.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__STRUCT_H_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/OriginbotLed in the package originbot_msgs.
typedef struct originbot_msgs__srv__OriginbotLed_Request
{
  bool on;
} originbot_msgs__srv__OriginbotLed_Request;

// Struct for a sequence of originbot_msgs__srv__OriginbotLed_Request.
typedef struct originbot_msgs__srv__OriginbotLed_Request__Sequence
{
  originbot_msgs__srv__OriginbotLed_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} originbot_msgs__srv__OriginbotLed_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/OriginbotLed in the package originbot_msgs.
typedef struct originbot_msgs__srv__OriginbotLed_Response
{
  bool result;
} originbot_msgs__srv__OriginbotLed_Response;

// Struct for a sequence of originbot_msgs__srv__OriginbotLed_Response.
typedef struct originbot_msgs__srv__OriginbotLed_Response__Sequence
{
  originbot_msgs__srv__OriginbotLed_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} originbot_msgs__srv__OriginbotLed_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__STRUCT_H_
