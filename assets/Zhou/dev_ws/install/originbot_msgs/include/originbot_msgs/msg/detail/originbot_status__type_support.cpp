// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "originbot_msgs/msg/detail/originbot_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace originbot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OriginbotStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) originbot_msgs::msg::OriginbotStatus(_init);
}

void OriginbotStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<originbot_msgs::msg::OriginbotStatus *>(message_memory);
  typed_message->~OriginbotStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OriginbotStatus_message_member_array[3] = {
  {
    "battery_voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs::msg::OriginbotStatus, battery_voltage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buzzer_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs::msg::OriginbotStatus, buzzer_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "led_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs::msg::OriginbotStatus, led_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OriginbotStatus_message_members = {
  "originbot_msgs::msg",  // message namespace
  "OriginbotStatus",  // message name
  3,  // number of fields
  sizeof(originbot_msgs::msg::OriginbotStatus),
  OriginbotStatus_message_member_array,  // message members
  OriginbotStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  OriginbotStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OriginbotStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OriginbotStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace originbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<originbot_msgs::msg::OriginbotStatus>()
{
  return &::originbot_msgs::msg::rosidl_typesupport_introspection_cpp::OriginbotStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, originbot_msgs, msg, OriginbotStatus)() {
  return &::originbot_msgs::msg::rosidl_typesupport_introspection_cpp::OriginbotStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
