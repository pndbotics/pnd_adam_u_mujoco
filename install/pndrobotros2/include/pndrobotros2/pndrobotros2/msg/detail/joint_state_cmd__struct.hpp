// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__STRUCT_HPP_
#define PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pndrobotros2__msg__JointStateCmd __attribute__((deprecated))
#else
# define DEPRECATED__pndrobotros2__msg__JointStateCmd __declspec(deprecated)
#endif

namespace pndrobotros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointStateCmd_
{
  using Type = JointStateCmd_<ContainerAllocator>;

  explicit JointStateCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointStateCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _q_d_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _q_d_type q_d;
  using _q_dot_d_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _q_dot_d_type q_dot_d;
  using _tau_d_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tau_d_type tau_d;
  using _hands_d_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _hands_d_type hands_d;

  // setters for named parameter idiom
  Type & set__q_d(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->q_d = _arg;
    return *this;
  }
  Type & set__q_dot_d(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->q_dot_d = _arg;
    return *this;
  }
  Type & set__tau_d(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tau_d = _arg;
    return *this;
  }
  Type & set__hands_d(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->hands_d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pndrobotros2::msg::JointStateCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const pndrobotros2::msg::JointStateCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pndrobotros2::msg::JointStateCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pndrobotros2::msg::JointStateCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pndrobotros2__msg__JointStateCmd
    std::shared_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pndrobotros2__msg__JointStateCmd
    std::shared_ptr<pndrobotros2::msg::JointStateCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointStateCmd_ & other) const
  {
    if (this->q_d != other.q_d) {
      return false;
    }
    if (this->q_dot_d != other.q_dot_d) {
      return false;
    }
    if (this->tau_d != other.tau_d) {
      return false;
    }
    if (this->hands_d != other.hands_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointStateCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointStateCmd_

// alias to use template instance with default allocator
using JointStateCmd =
  pndrobotros2::msg::JointStateCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pndrobotros2

#endif  // PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__STRUCT_HPP_
