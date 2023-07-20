// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/srv/detail/originbot_pid__rosidl_typesupport_fastrtps_cpp.hpp"
#include "originbot_msgs/srv/detail/originbot_pid__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
cdr_serialize(
  const originbot_msgs::srv::OriginbotPID_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: p
  cdr << ros_message.p;
  // Member: i
  cdr << ros_message.i;
  // Member: d
  cdr << ros_message.d;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  originbot_msgs::srv::OriginbotPID_Request & ros_message)
{
  // Member: p
  cdr >> ros_message.p;

  // Member: i
  cdr >> ros_message.i;

  // Member: d
  cdr >> ros_message.d;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
get_serialized_size(
  const originbot_msgs::srv::OriginbotPID_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: p
  {
    size_t item_size = sizeof(ros_message.p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i
  {
    size_t item_size = sizeof(ros_message.i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
max_serialized_size_OriginbotPID_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: p
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: i
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _OriginbotPID_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const originbot_msgs::srv::OriginbotPID_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OriginbotPID_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<originbot_msgs::srv::OriginbotPID_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OriginbotPID_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const originbot_msgs::srv::OriginbotPID_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OriginbotPID_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OriginbotPID_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _OriginbotPID_Request__callbacks = {
  "originbot_msgs::srv",
  "OriginbotPID_Request",
  _OriginbotPID_Request__cdr_serialize,
  _OriginbotPID_Request__cdr_deserialize,
  _OriginbotPID_Request__get_serialized_size,
  _OriginbotPID_Request__max_serialized_size
};

static rosidl_message_type_support_t _OriginbotPID_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OriginbotPID_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace originbot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<originbot_msgs::srv::OriginbotPID_Request>()
{
  return &originbot_msgs::srv::typesupport_fastrtps_cpp::_OriginbotPID_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, originbot_msgs, srv, OriginbotPID_Request)() {
  return &originbot_msgs::srv::typesupport_fastrtps_cpp::_OriginbotPID_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace originbot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
cdr_serialize(
  const originbot_msgs::srv::OriginbotPID_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << (ros_message.result ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  originbot_msgs::srv::OriginbotPID_Response & ros_message)
{
  // Member: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.result = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
get_serialized_size(
  const originbot_msgs::srv::OriginbotPID_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_originbot_msgs
max_serialized_size_OriginbotPID_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _OriginbotPID_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const originbot_msgs::srv::OriginbotPID_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OriginbotPID_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<originbot_msgs::srv::OriginbotPID_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OriginbotPID_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const originbot_msgs::srv::OriginbotPID_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OriginbotPID_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OriginbotPID_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _OriginbotPID_Response__callbacks = {
  "originbot_msgs::srv",
  "OriginbotPID_Response",
  _OriginbotPID_Response__cdr_serialize,
  _OriginbotPID_Response__cdr_deserialize,
  _OriginbotPID_Response__get_serialized_size,
  _OriginbotPID_Response__max_serialized_size
};

static rosidl_message_type_support_t _OriginbotPID_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OriginbotPID_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace originbot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<originbot_msgs::srv::OriginbotPID_Response>()
{
  return &originbot_msgs::srv::typesupport_fastrtps_cpp::_OriginbotPID_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, originbot_msgs, srv, OriginbotPID_Response)() {
  return &originbot_msgs::srv::typesupport_fastrtps_cpp::_OriginbotPID_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace originbot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _OriginbotPID__callbacks = {
  "originbot_msgs::srv",
  "OriginbotPID",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, originbot_msgs, srv, OriginbotPID_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, originbot_msgs, srv, OriginbotPID_Response)(),
};

static rosidl_service_type_support_t _OriginbotPID__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OriginbotPID__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace originbot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_originbot_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<originbot_msgs::srv::OriginbotPID>()
{
  return &originbot_msgs::srv::typesupport_fastrtps_cpp::_OriginbotPID__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, originbot_msgs, srv, OriginbotPID)() {
  return &originbot_msgs::srv::typesupport_fastrtps_cpp::_OriginbotPID__handle;
}

#ifdef __cplusplus
}
#endif
