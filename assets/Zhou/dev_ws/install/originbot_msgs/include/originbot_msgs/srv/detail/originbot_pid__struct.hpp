// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from originbot_msgs:srv/OriginbotPID.idl
// generated code does not contain a copyright notice

#ifndef ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__STRUCT_HPP_
#define ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__originbot_msgs__srv__OriginbotPID_Request __attribute__((deprecated))
#else
# define DEPRECATED__originbot_msgs__srv__OriginbotPID_Request __declspec(deprecated)
#endif

namespace originbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OriginbotPID_Request_
{
  using Type = OriginbotPID_Request_<ContainerAllocator>;

  explicit OriginbotPID_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->p = 0.0f;
      this->i = 0.0f;
      this->d = 0.0f;
    }
  }

  explicit OriginbotPID_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->p = 0.0f;
      this->i = 0.0f;
      this->d = 0.0f;
    }
  }

  // field types and members
  using _p_type =
    float;
  _p_type p;
  using _i_type =
    float;
  _i_type i;
  using _d_type =
    float;
  _d_type d;

  // setters for named parameter idiom
  Type & set__p(
    const float & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__i(
    const float & _arg)
  {
    this->i = _arg;
    return *this;
  }
  Type & set__d(
    const float & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__originbot_msgs__srv__OriginbotPID_Request
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__originbot_msgs__srv__OriginbotPID_Request
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OriginbotPID_Request_ & other) const
  {
    if (this->p != other.p) {
      return false;
    }
    if (this->i != other.i) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const OriginbotPID_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OriginbotPID_Request_

// alias to use template instance with default allocator
using OriginbotPID_Request =
  originbot_msgs::srv::OriginbotPID_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace originbot_msgs


#ifndef _WIN32
# define DEPRECATED__originbot_msgs__srv__OriginbotPID_Response __attribute__((deprecated))
#else
# define DEPRECATED__originbot_msgs__srv__OriginbotPID_Response __declspec(deprecated)
#endif

namespace originbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OriginbotPID_Response_
{
  using Type = OriginbotPID_Response_<ContainerAllocator>;

  explicit OriginbotPID_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit OriginbotPID_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__originbot_msgs__srv__OriginbotPID_Response
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__originbot_msgs__srv__OriginbotPID_Response
    std::shared_ptr<originbot_msgs::srv::OriginbotPID_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OriginbotPID_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const OriginbotPID_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OriginbotPID_Response_

// alias to use template instance with default allocator
using OriginbotPID_Response =
  originbot_msgs::srv::OriginbotPID_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace originbot_msgs

namespace originbot_msgs
{

namespace srv
{

struct OriginbotPID
{
  using Request = originbot_msgs::srv::OriginbotPID_Request;
  using Response = originbot_msgs::srv::OriginbotPID_Response;
};

}  // namespace srv

}  // namespace originbot_msgs

#endif  // ORIGINBOT_MSGS__SRV__DETAIL__ORIGINBOT_PID__STRUCT_HPP_
