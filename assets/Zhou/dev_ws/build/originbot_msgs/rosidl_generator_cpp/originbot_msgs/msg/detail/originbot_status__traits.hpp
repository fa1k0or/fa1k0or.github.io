// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__TRAITS_HPP_
#define ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__TRAITS_HPP_

#include "originbot_msgs/msg/detail/originbot_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<originbot_msgs::msg::OriginbotStatus>()
{
  return "originbot_msgs::msg::OriginbotStatus";
}

template<>
inline const char * name<originbot_msgs::msg::OriginbotStatus>()
{
  return "originbot_msgs/msg/OriginbotStatus";
}

template<>
struct has_fixed_size<originbot_msgs::msg::OriginbotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<originbot_msgs::msg::OriginbotStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<originbot_msgs::msg::OriginbotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__TRAITS_HPP_
