// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/msg/detail/originbot_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "originbot_msgs/msg/detail/originbot_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace originbot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
cdr_serialize(
  const originbot_msgs::msg::OriginbotStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_voltage
  cdr << ros_message.battery_voltage;
  // Member: buzzer_on
  cdr << (ros_message.buzzer_on ? true : false);
  // Member: led_on
  cdr << (ros_message.led_on ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  originbot_msgs::msg::OriginbotStatus & ros_message)
{
  // Member: battery_voltage
  cdr >> ros_message.battery_voltage;

  // Member: buzzer_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.buzzer_on = tmp ? true : false;
  }

  // Member: led_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.led_on = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
get_serialized_size(
  const originbot_msgs::msg::OriginbotStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_voltage
  {
    size_t item_size = sizeof(ros_message.battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: buzzer_on
  {
    size_t item_size = sizeof(ros_message.buzzer_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: led_on
  {
    size_t item_size = sizeof(ros_message.led_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
max_serialized_size_OriginbotStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: battery_voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: buzzer_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: led_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _OriginbotStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const originbot_msgs::msg::OriginbotStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OriginbotStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<originbot_msgs::msg::OriginbotStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OriginbotStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const originbot_msgs::msg::OriginbotStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OriginbotStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OriginbotStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _OriginbotStatus__callbacks = {
  "originbot_msgs::msg",
  "OriginbotStatus",
  _OriginbotStatus__cdr_serialize,
  _OriginbotStatus__cdr_deserialize,
  _OriginbotStatus__get_serialized_size,
  _OriginbotStatus__max_serialized_size
};

static rosidl_message_type_support_t _OriginbotStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OriginbotStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace originbot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<originbot_msgs::msg::OriginbotStatus>()
{
  return &originbot_msgs::msg::typesupport_fastrtps_cpp::_OriginbotStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, originbot_msgs, msg, OriginbotStatus)() {
  return &originbot_msgs::msg::typesupport_fastrtps_cpp::_OriginbotStatus__handle;
}

#ifdef __cplusplus
}
#endif
