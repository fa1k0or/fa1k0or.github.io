// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__FUNCTIONS_H_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "originbot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "originbot_msgs/srv/detail/originbot_pid__struct.h"

/// Initialize srv/OriginbotPID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * originbot_msgs__srv__OriginbotPID_Request
 * )) before or use
 * originbot_msgs__srv__OriginbotPID_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
bool
originbot_msgs__srv__OriginbotPID_Request__init(originbot_msgs__srv__OriginbotPID_Request * msg);

/// Finalize srv/OriginbotPID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Request__fini(originbot_msgs__srv__OriginbotPID_Request * msg);

/// Create srv/OriginbotPID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * originbot_msgs__srv__OriginbotPID_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
originbot_msgs__srv__OriginbotPID_Request *
originbot_msgs__srv__OriginbotPID_Request__create();

/// Destroy srv/OriginbotPID message.
/**
 * It calls
 * originbot_msgs__srv__OriginbotPID_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Request__destroy(originbot_msgs__srv__OriginbotPID_Request * msg);


/// Initialize array of srv/OriginbotPID messages.
/**
 * It allocates the memory for the number of elements and calls
 * originbot_msgs__srv__OriginbotPID_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
bool
originbot_msgs__srv__OriginbotPID_Request__Sequence__init(originbot_msgs__srv__OriginbotPID_Request__Sequence * array, size_t size);

/// Finalize array of srv/OriginbotPID messages.
/**
 * It calls
 * originbot_msgs__srv__OriginbotPID_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Request__Sequence__fini(originbot_msgs__srv__OriginbotPID_Request__Sequence * array);

/// Create array of srv/OriginbotPID messages.
/**
 * It allocates the memory for the array and calls
 * originbot_msgs__srv__OriginbotPID_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
originbot_msgs__srv__OriginbotPID_Request__Sequence *
originbot_msgs__srv__OriginbotPID_Request__Sequence__create(size_t size);

/// Destroy array of srv/OriginbotPID messages.
/**
 * It calls
 * originbot_msgs__srv__OriginbotPID_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Request__Sequence__destroy(originbot_msgs__srv__OriginbotPID_Request__Sequence * array);

/// Initialize srv/OriginbotPID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * originbot_msgs__srv__OriginbotPID_Response
 * )) before or use
 * originbot_msgs__srv__OriginbotPID_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
bool
originbot_msgs__srv__OriginbotPID_Response__init(originbot_msgs__srv__OriginbotPID_Response * msg);

/// Finalize srv/OriginbotPID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Response__fini(originbot_msgs__srv__OriginbotPID_Response * msg);

/// Create srv/OriginbotPID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * originbot_msgs__srv__OriginbotPID_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
originbot_msgs__srv__OriginbotPID_Response *
originbot_msgs__srv__OriginbotPID_Response__create();

/// Destroy srv/OriginbotPID message.
/**
 * It calls
 * originbot_msgs__srv__OriginbotPID_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Response__destroy(originbot_msgs__srv__OriginbotPID_Response * msg);


/// Initialize array of srv/OriginbotPID messages.
/**
 * It allocates the memory for the number of elements and calls
 * originbot_msgs__srv__OriginbotPID_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
bool
originbot_msgs__srv__OriginbotPID_Response__Sequence__init(originbot_msgs__srv__OriginbotPID_Response__Sequence * array, size_t size);

/// Finalize array of srv/OriginbotPID messages.
/**
 * It calls
 * originbot_msgs__srv__OriginbotPID_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Response__Sequence__fini(originbot_msgs__srv__OriginbotPID_Response__Sequence * array);

/// Create array of srv/OriginbotPID messages.
/**
 * It allocates the memory for the array and calls
 * originbot_msgs__srv__OriginbotPID_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
originbot_msgs__srv__OriginbotPID_Response__Sequence *
originbot_msgs__srv__OriginbotPID_Response__Sequence__create(size_t size);

/// Destroy array of srv/OriginbotPID messages.
/**
 * It calls
 * originbot_msgs__srv__OriginbotPID_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_originbot_msgs
void
originbot_msgs__srv__OriginbotPID_Response__Sequence__destroy(originbot_msgs__srv__OriginbotPID_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__FUNCTIONS_H_
