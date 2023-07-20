// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "originbot_msgs/msg/detail/originbot_status__rosidl_typesupport_introspection_c.h"
#include "originbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "originbot_msgs/msg/detail/originbot_status__functions.h"
#include "originbot_msgs/msg/detail/originbot_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  originbot_msgs__msg__OriginbotStatus__init(message_memory);
}

void OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_fini_function(void * message_memory)
{
  originbot_msgs__msg__OriginbotStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_member_array[3] = {
  {
    "battery_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__msg__OriginbotStatus, battery_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buzzer_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__msg__OriginbotStatus, buzzer_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__msg__OriginbotStatus, led_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_members = {
  "originbot_msgs__msg",  // message namespace
  "OriginbotStatus",  // message name
  3,  // number of fields
  sizeof(originbot_msgs__msg__OriginbotStatus),
  OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_member_array,  // message members
  OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_type_support_handle = {
  0,
  &OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, msg, OriginbotStatus)() {
  if (!OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_type_support_handle.typesupport_identifier) {
    OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OriginbotStatus__rosidl_typesupport_introspection_c__OriginbotStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
