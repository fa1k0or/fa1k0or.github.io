// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from originbot_msgs:msg/OriginbotStatus.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__STRUCT_HPP_
#define ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__originbot_msgs__msg__OriginbotStatus __attribute__((deprecated))
#else
# define DEPRECATED__originbot_msgs__msg__OriginbotStatus __declspec(deprecated)
#endif

namespace originbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OriginbotStatus_
{
  using Type = OriginbotStatus_<ContainerAllocator>;

  explicit OriginbotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->buzzer_on = false;
      this->led_on = false;
    }
  }

  explicit OriginbotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_voltage = 0.0f;
      this->buzzer_on = false;
      this->led_on = false;
    }
  }

  // field types and members
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _buzzer_on_type =
    bool;
  _buzzer_on_type buzzer_on;
  using _led_on_type =
    bool;
  _led_on_type led_on;

  // setters for named parameter idiom
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__buzzer_on(
    const bool & _arg)
  {
    this->buzzer_on = _arg;
    return *this;
  }
  Type & set__led_on(
    const bool & _arg)
  {
    this->led_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    originbot_msgs::msg::OriginbotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const originbot_msgs::msg::OriginbotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::msg::OriginbotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::msg::OriginbotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__originbot_msgs__msg__OriginbotStatus
    std::shared_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__originbot_msgs__msg__OriginbotStatus
    std::shared_ptr<originbot_msgs::msg::OriginbotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OriginbotStatus_ & other) const
  {
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->buzzer_on != other.buzzer_on) {
      return false;
    }
    if (this->led_on != other.led_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const OriginbotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OriginbotStatus_

// alias to use template instance with default allocator
using OriginbotStatus =
  originbot_msgs::msg::OriginbotStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace originbot_msgs

#endif  // ORIGINBOT_MSGS__MSG__DETAIL__ORIGINBOT_STATUS__STRUCT_HPP_
