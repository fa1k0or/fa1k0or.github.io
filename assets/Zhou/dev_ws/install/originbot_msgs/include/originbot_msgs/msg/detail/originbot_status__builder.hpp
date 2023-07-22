// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__BUILDER_HPP_
#define ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__BUILDER_HPP_

#include "originbot_msgs/msg/detail/originbot_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace originbot_msgs
{

namespace msg
{

namespace builder
{

class Init_OriginbotStatus_led_on
{
public:
  explicit Init_OriginbotStatus_led_on(::originbot_msgs::msg::OriginbotStatus & msg)
  : msg_(msg)
  {}
  ::originbot_msgs::msg::OriginbotStatus led_on(::originbot_msgs::msg::OriginbotStatus::_led_on_type arg)
  {
    msg_.led_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::originbot_msgs::msg::OriginbotStatus msg_;
};

class Init_OriginbotStatus_buzzer_on
{
public:
  explicit Init_OriginbotStatus_buzzer_on(::originbot_msgs::msg::OriginbotStatus & msg)
  : msg_(msg)
  {}
  Init_OriginbotStatus_led_on buzzer_on(::originbot_msgs::msg::OriginbotStatus::_buzzer_on_type arg)
  {
    msg_.buzzer_on = std::move(arg);
    return Init_OriginbotStatus_led_on(msg_);
  }

private:
  ::originbot_msgs::msg::OriginbotStatus msg_;
};

class Init_OriginbotStatus_battery_voltage
{
public:
  Init_OriginbotStatus_battery_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OriginbotStatus_buzzer_on battery_voltage(::originbot_msgs::msg::OriginbotStatus::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_OriginbotStatus_buzzer_on(msg_);
  }

private:
  ::originbot_msgs::msg::OriginbotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::originbot_msgs::msg::OriginbotStatus>()
{
  return originbot_msgs::msg::builder::Init_OriginbotStatus_battery_voltage();
}

}  // namespace originbot_msgs

#endif  // ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__BUILDER_HPP_
