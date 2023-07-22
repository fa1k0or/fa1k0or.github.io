// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from originbot_msgs:srv/OriginbotLed.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__BUILDER_HPP_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__BUILDER_HPP_

#include "originbot_msgs/srv/detail/originbot_led__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace originbot_msgs
{

namespace srv
{

namespace builder
{

class Init_OriginbotLed_Request_on
{
public:
  Init_OriginbotLed_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::originbot_msgs::srv::OriginbotLed_Request on(::originbot_msgs::srv::OriginbotLed_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::originbot_msgs::srv::OriginbotLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::originbot_msgs::srv::OriginbotLed_Request>()
{
  return originbot_msgs::srv::builder::Init_OriginbotLed_Request_on();
}

}  // namespace originbot_msgs


namespace originbot_msgs
{

namespace srv
{

namespace builder
{

class Init_OriginbotLed_Response_result
{
public:
  Init_OriginbotLed_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::originbot_msgs::srv::OriginbotLed_Response result(::originbot_msgs::srv::OriginbotLed_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::originbot_msgs::srv::OriginbotLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::originbot_msgs::srv::OriginbotLed_Response>()
{
  return originbot_msgs::srv::builder::Init_OriginbotLed_Response_result();
}

}  // namespace originbot_msgs

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_LED__BUILDER_HPP_
