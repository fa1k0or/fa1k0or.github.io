// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from originbot_msgs:srv/OriginbotLed.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__TRAITS_HPP_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__TRAITS_HPP_

#include "originbot_msgs/srv/detail/originbot_led__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<originbot_msgs::srv::OriginbotLed_Request>()
{
  return "originbot_msgs::srv::OriginbotLed_Request";
}

template<>
inline const char * name<originbot_msgs::srv::OriginbotLed_Request>()
{
  return "originbot_msgs/srv/OriginbotLed_Request";
}

template<>
struct has_fixed_size<originbot_msgs::srv::OriginbotLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<originbot_msgs::srv::OriginbotLed_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<originbot_msgs::srv::OriginbotLed_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<originbot_msgs::srv::OriginbotLed_Response>()
{
  return "originbot_msgs::srv::OriginbotLed_Response";
}

template<>
inline const char * name<originbot_msgs::srv::OriginbotLed_Response>()
{
  return "originbot_msgs/srv/OriginbotLed_Response";
}

template<>
struct has_fixed_size<originbot_msgs::srv::OriginbotLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<originbot_msgs::srv::OriginbotLed_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<originbot_msgs::srv::OriginbotLed_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<originbot_msgs::srv::OriginbotLed>()
{
  return "originbot_msgs::srv::OriginbotLed";
}

template<>
inline const char * name<originbot_msgs::srv::OriginbotLed>()
{
  return "originbot_msgs/srv/OriginbotLed";
}

template<>
struct has_fixed_size<originbot_msgs::srv::OriginbotLed>
  : std::integral_constant<
    bool,
    has_fixed_size<originbot_msgs::srv::OriginbotLed_Request>::value &&
    has_fixed_size<originbot_msgs::srv::OriginbotLed_Response>::value
  >
{
};

template<>
struct has_bounded_size<originbot_msgs::srv::OriginbotLed>
  : std::integral_constant<
    bool,
    has_bounded_size<originbot_msgs::srv::OriginbotLed_Request>::value &&
    has_bounded_size<originbot_msgs::srv::OriginbotLed_Response>::value
  >
{
};

template<>
struct is_service<originbot_msgs::srv::OriginbotLed>
  : std::true_type
{
};

template<>
struct is_service_request<originbot_msgs::srv::OriginbotLed_Request>
  : std::true_type
{
};

template<>
struct is_service_response<originbot_msgs::srv::OriginbotLed_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__TRAITS_HPP_
