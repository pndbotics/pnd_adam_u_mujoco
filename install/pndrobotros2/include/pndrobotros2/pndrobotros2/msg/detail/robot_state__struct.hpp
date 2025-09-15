// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pndrobotros2:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pndrobotros2__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__pndrobotros2__msg__RobotState __declspec(deprecated)
#endif

namespace pndrobotros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _q_a_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _q_a_type q_a;
  using _q_dot_a_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _q_dot_a_type q_dot_a;
  using _tau_a_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tau_a_type tau_a;
  using _hands_a_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _hands_a_type hands_a;

  // setters for named parameter idiom
  Type & set__q_a(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->q_a = _arg;
    return *this;
  }
  Type & set__q_dot_a(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->q_dot_a = _arg;
    return *this;
  }
  Type & set__tau_a(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tau_a = _arg;
    return *this;
  }
  Type & set__hands_a(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->hands_a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pndrobotros2::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pndrobotros2::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pndrobotros2::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pndrobotros2::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pndrobotros2__msg__RobotState
    std::shared_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pndrobotros2__msg__RobotState
    std::shared_ptr<pndrobotros2::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->q_a != other.q_a) {
      return false;
    }
    if (this->q_dot_a != other.q_dot_a) {
      return false;
    }
    if (this->tau_a != other.tau_a) {
      return false;
    }
    if (this->hands_a != other.hands_a) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  pndrobotros2::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pndrobotros2

#endif  // PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
