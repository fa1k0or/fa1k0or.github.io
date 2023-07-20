// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice
#include "originbot_msgs/srv/detail/originbot_pid__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "originbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "originbot_msgs/srv/detail/originbot_pid__struct.h"
#include "originbot_msgs/srv/detail/originbot_pid__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _OriginbotPID_Request__ros_msg_type = originbot_msgs__srv__OriginbotPID_Request;

static bool _OriginbotPID_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OriginbotPID_Request__ros_msg_type * ros_message = static_cast<const _OriginbotPID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: p
  {
    cdr << ros_message->p;
  }

  // Field name: i
  {
    cdr << ros_message->i;
  }

  // Field name: d
  {
    cdr << ros_message->d;
  }

  return true;
}

static bool _OriginbotPID_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OriginbotPID_Request__ros_msg_type * ros_message = static_cast<_OriginbotPID_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: p
  {
    cdr >> ros_message->p;
  }

  // Field name: i
  {
    cdr >> ros_message->i;
  }

  // Field name: d
  {
    cdr >> ros_message->d;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_originbot_msgs
size_t get_serialized_size_originbot_msgs__srv__OriginbotPID_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OriginbotPID_Request__ros_msg_type * ros_message = static_cast<const _OriginbotPID_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name p
  {
    size_t item_size = sizeof(ros_message->p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i
  {
    size_t item_size = sizeof(ros_message->i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d
  {
    size_t item_size = sizeof(ros_message->d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OriginbotPID_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_originbot_msgs__srv__OriginbotPID_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_originbot_msgs
size_t max_serialized_size_originbot_msgs__srv__OriginbotPID_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: p
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: i
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _OriginbotPID_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_originbot_msgs__srv__OriginbotPID_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OriginbotPID_Request = {
  "originbot_msgs::srv",
  "OriginbotPID_Request",
  _OriginbotPID_Request__cdr_serialize,
  _OriginbotPID_Request__cdr_deserialize,
  _OriginbotPID_Request__get_serialized_size,
  _OriginbotPID_Request__max_serialized_size
};

static rosidl_message_type_support_t _OriginbotPID_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OriginbotPID_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, originbot_msgs, srv, OriginbotPID_Request)() {
  return &_OriginbotPID_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "originbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "originbot_msgs/srv/detail/originbot_pid__struct.h"
// already included above
// #include "originbot_msgs/srv/detail/originbot_pid__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _OriginbotPID_Response__ros_msg_type = originbot_msgs__srv__OriginbotPID_Response;

static bool _OriginbotPID_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OriginbotPID_Response__ros_msg_type * ros_message = static_cast<const _OriginbotPID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _OriginbotPID_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OriginbotPID_Response__ros_msg_type * ros_message = static_cast<_OriginbotPID_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_originbot_msgs
size_t get_serialized_size_originbot_msgs__srv__OriginbotPID_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OriginbotPID_Response__ros_msg_type * ros_message = static_cast<const _OriginbotPID_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OriginbotPID_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_originbot_msgs__srv__OriginbotPID_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_originbot_msgs
size_t max_serialized_size_originbot_msgs__srv__OriginbotPID_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OriginbotPID_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_originbot_msgs__srv__OriginbotPID_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OriginbotPID_Response = {
  "originbot_msgs::srv",
  "OriginbotPID_Response",
  _OriginbotPID_Response__cdr_serialize,
  _OriginbotPID_Response__cdr_deserialize,
  _OriginbotPID_Response__get_serialized_size,
  _OriginbotPID_Response__max_serialized_size
};

static rosidl_message_type_support_t _OriginbotPID_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OriginbotPID_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, originbot_msgs, srv, OriginbotPID_Response)() {
  return &_OriginbotPID_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "originbot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "originbot_msgs/srv/originbot_pid.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OriginbotPID__callbacks = {
  "originbot_msgs::srv",
  "OriginbotPID",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, originbot_msgs, srv, OriginbotPID_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, originbot_msgs, srv, OriginbotPID_Response)(),
};

static rosidl_service_type_support_t OriginbotPID__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OriginbotPID__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, originbot_msgs, srv, OriginbotPID)() {
  return &OriginbotPID__handle;
}

#if defined(__cplusplus)
}
#endif
