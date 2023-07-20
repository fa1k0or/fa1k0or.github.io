// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "originbot_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "originbot_msgs/msg/detail/originbot_status__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace originbot_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _OriginbotStatus_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _OriginbotStatus_type_support_ids_t;

static const _OriginbotStatus_type_support_ids_t _OriginbotStatus_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _OriginbotStatus_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _OriginbotStatus_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _OriginbotStatus_type_support_symbol_names_t _OriginbotStatus_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, originbot_msgs, msg, OriginbotStatus)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, msg, OriginbotStatus)),
  }
};

typedef struct _OriginbotStatus_type_support_data_t
{
  void * data[2];
} _OriginbotStatus_type_support_data_t;

static _OriginbotStatus_type_support_data_t _OriginbotStatus_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _OriginbotStatus_message_typesupport_map = {
  2,
  "originbot_msgs",
  &_OriginbotStatus_message_typesupport_ids.typesupport_identifier[0],
  &_OriginbotStatus_message_typesupport_symbol_names.symbol_name[0],
  &_OriginbotStatus_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t OriginbotStatus_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_OriginbotStatus_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace originbot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, originbot_msgs, msg, OriginbotStatus)() {
  return &::originbot_msgs::msg::rosidl_typesupport_c::OriginbotStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
