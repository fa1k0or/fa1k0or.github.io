// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from originbot_msgs:srv/OriginbotBuzzer.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_BUZZER__STRUCT_HPP_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_BUZZER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Request __attribute__((deprecated))
#else
# define DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Request __declspec(deprecated)
#endif

namespace originbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OriginbotBuzzer_Request_
{
  using Type = OriginbotBuzzer_Request_<ContainerAllocator>;

  explicit OriginbotBuzzer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->on = false;
    }
  }

  explicit OriginbotBuzzer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->on = false;
    }
  }

  // field types and members
  using _on_type =
    bool;
  _on_type on;

  // setters for named parameter idiom
  Type & set__on(
    const bool & _arg)
  {
    this->on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Request
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Request
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OriginbotBuzzer_Request_ & other) const
  {
    if (this->on != other.on) {
      return false;
    }
    return true;
  }
  bool operator!=(const OriginbotBuzzer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OriginbotBuzzer_Request_

// alias to use template instance with default allocator
using OriginbotBuzzer_Request =
  originbot_msgs::srv::OriginbotBuzzer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace originbot_msgs


#ifndef _WIN32
# define DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Response __attribute__((deprecated))
#else
# define DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Response __declspec(deprecated)
#endif

namespace originbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OriginbotBuzzer_Response_
{
  using Type = OriginbotBuzzer_Response_<ContainerAllocator>;

  explicit OriginbotBuzzer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit OriginbotBuzzer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Response
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__originbot_msgs__srv__OriginbotBuzzer_Response
    std::shared_ptr<originbot_msgs::srv::OriginbotBuzzer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OriginbotBuzzer_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OriginbotBuzzer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OriginbotBuzzer_Response_

// alias to use template instance with default allocator
using OriginbotBuzzer_Response =
  originbot_msgs::srv::OriginbotBuzzer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace originbot_msgs

namespace originbot_msgs
{

namespace srv
{

struct OriginbotBuzzer
{
  using Request = originbot_msgs::srv::OriginbotBuzzer_Request;
  using Response = originbot_msgs::srv::OriginbotBuzzer_Response;
};

}  // namespace srv

}  // namespace originbot_msgs

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_BUZZER__STRUCT_HPP_
