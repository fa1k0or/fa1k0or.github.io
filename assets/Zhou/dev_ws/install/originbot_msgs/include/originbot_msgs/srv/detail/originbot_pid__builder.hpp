// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__BUILDER_HPP_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__BUILDER_HPP_

#include "originbot_msgs/srv/detail/originbot_pid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace originbot_msgs
{

namespace srv
{

namespace builder
{

class Init_OriginbotPID_Request_d
{
public:
  explicit Init_OriginbotPID_Request_d(::originbot_msgs::srv::OriginbotPID_Request & msg)
  : msg_(msg)
  {}
  ::originbot_msgs::srv::OriginbotPID_Request d(::originbot_msgs::srv::OriginbotPID_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::originbot_msgs::srv::OriginbotPID_Request msg_;
};

class Init_OriginbotPID_Request_i
{
public:
  explicit Init_OriginbotPID_Request_i(::originbot_msgs::srv::OriginbotPID_Request & msg)
  : msg_(msg)
  {}
  Init_OriginbotPID_Request_d i(::originbot_msgs::srv::OriginbotPID_Request::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_OriginbotPID_Request_d(msg_);
  }

private:
  ::originbot_msgs::srv::OriginbotPID_Request msg_;
};

class Init_OriginbotPID_Request_p
{
public:
  Init_OriginbotPID_Request_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OriginbotPID_Request_i p(::originbot_msgs::srv::OriginbotPID_Request::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_OriginbotPID_Request_i(msg_);
  }

private:
  ::originbot_msgs::srv::OriginbotPID_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::originbot_msgs::srv::OriginbotPID_Request>()
{
  return originbot_msgs::srv::builder::Init_OriginbotPID_Request_p();
}

}  // namespace originbot_msgs


namespace originbot_msgs
{

namespace srv
{

namespace builder
{

class Init_OriginbotPID_Response_result
{
public:
  Init_OriginbotPID_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::originbot_msgs::srv::OriginbotPID_Response result(::originbot_msgs::srv::OriginbotPID_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::originbot_msgs::srv::OriginbotPID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::originbot_msgs::srv::OriginbotPID_Response>()
{
  return originbot_msgs::srv::builder::Init_OriginbotPID_Response_result();
}

}  // namespace originbot_msgs

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__BUILDER_HPP_
