// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "originbot_msgs/srv/detail/originbot_pid__rosidl_typesupport_introspection_c.h"
#include "originbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "originbot_msgs/srv/detail/originbot_pid__functions.h"
#include "originbot_msgs/srv/detail/originbot_pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  originbot_msgs__srv__OriginbotPID_Request__init(message_memory);
}

void OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_fini_function(void * message_memory)
{
  originbot_msgs__srv__OriginbotPID_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_member_array[3] = {
  {
    "p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__srv__OriginbotPID_Request, p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__srv__OriginbotPID_Request, i),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__srv__OriginbotPID_Request, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_members = {
  "originbot_msgs__srv",  // message namespace
  "OriginbotPID_Request",  // message name
  3,  // number of fields
  sizeof(originbot_msgs__srv__OriginbotPID_Request),
  OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_member_array,  // message members
  OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_type_support_handle = {
  0,
  &OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID_Request)() {
  if (!OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_type_support_handle.typesupport_identifier) {
    OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OriginbotPID_Request__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "originbot_msgs/srv/detail/originbot_pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "originbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "originbot_msgs/srv/detail/originbot_pid__functions.h"
// already included above
// #include "originbot_msgs/srv/detail/originbot_pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  originbot_msgs__srv__OriginbotPID_Response__init(message_memory);
}

void OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_fini_function(void * message_memory)
{
  originbot_msgs__srv__OriginbotPID_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(originbot_msgs__srv__OriginbotPID_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_members = {
  "originbot_msgs__srv",  // message namespace
  "OriginbotPID_Response",  // message name
  1,  // number of fields
  sizeof(originbot_msgs__srv__OriginbotPID_Response),
  OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_member_array,  // message members
  OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_type_support_handle = {
  0,
  &OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_originbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID_Response)() {
  if (!OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_type_support_handle.typesupport_identifier) {
    OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OriginbotPID_Response__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "originbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "originbot_msgs/srv/detail/originbot_pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_members = {
  "originbot_msgs__srv",  // service namespace
  "OriginbotPID",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_Request_message_type_support_handle,
  NULL  // response message
  // originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_Response_message_type_support_handle
};

static rosidl_service_type_support_t originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_type_support_handle = {
  0,
  &originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_originbot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID)() {
  if (!originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_type_support_handle.typesupport_identifier) {
    originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, originbot_msgs, srv, OriginbotPID_Response)()->data;
  }

  return &originbot_msgs__srv__detail__originbot_pid__rosidl_typesupport_introspection_c__OriginbotPID_service_type_support_handle;
}
