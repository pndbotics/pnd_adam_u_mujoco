// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pndrobotros2:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__IMU__STRUCT_HPP_
#define PNDROBOTROS2__MSG__DETAIL__IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pndrobotros2__msg__Imu __attribute__((deprecated))
#else
# define DEPRECATED__pndrobotros2__msg__Imu __declspec(deprecated)
#endif

namespace pndrobotros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Imu_
{
  using Type = Imu_<ContainerAllocator>;

  explicit Imu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->linear_acceleration.begin(), this->linear_acceleration.end(), 0.0);
    }
  }

  explicit Imu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angular_velocity(_alloc),
    linear_acceleration(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->linear_acceleration.begin(), this->linear_acceleration.end(), 0.0);
    }
  }

  // field types and members
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _angular_velocity_type =
    std::array<double, 3>;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    std::array<double, 3>;
  _linear_acceleration_type linear_acceleration;

  // setters for named parameter idiom
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<double, 3> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const std::array<double, 3> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pndrobotros2::msg::Imu_<ContainerAllocator> *;
  using ConstRawPtr =
    const pndrobotros2::msg::Imu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pndrobotros2::msg::Imu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pndrobotros2::msg::Imu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pndrobotros2::msg::Imu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pndrobotros2::msg::Imu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pndrobotros2::msg::Imu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pndrobotros2::msg::Imu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pndrobotros2::msg::Imu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pndrobotros2::msg::Imu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pndrobotros2__msg__Imu
    std::shared_ptr<pndrobotros2::msg::Imu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pndrobotros2__msg__Imu
    std::shared_ptr<pndrobotros2::msg::Imu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu_

// alias to use template instance with default allocator
using Imu =
  pndrobotros2::msg::Imu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pndrobotros2

#endif  // PNDROBOTROS2__MSG__DETAIL__IMU__STRUCT_HPP_
