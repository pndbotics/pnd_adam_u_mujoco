// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pndrobotros2:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__IMU__BUILDER_HPP_
#define PNDROBOTROS2__MSG__DETAIL__IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pndrobotros2/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pndrobotros2
{

namespace msg
{

namespace builder
{

class Init_Imu_linear_acceleration
{
public:
  explicit Init_Imu_linear_acceleration(::pndrobotros2::msg::Imu & msg)
  : msg_(msg)
  {}
  ::pndrobotros2::msg::Imu linear_acceleration(::pndrobotros2::msg::Imu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pndrobotros2::msg::Imu msg_;
};

class Init_Imu_angular_velocity
{
public:
  explicit Init_Imu_angular_velocity(::pndrobotros2::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration angular_velocity(::pndrobotros2::msg::Imu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu_linear_acceleration(msg_);
  }

private:
  ::pndrobotros2::msg::Imu msg_;
};

class Init_Imu_roll
{
public:
  explicit Init_Imu_roll(::pndrobotros2::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity roll(::pndrobotros2::msg::Imu::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Imu_angular_velocity(msg_);
  }

private:
  ::pndrobotros2::msg::Imu msg_;
};

class Init_Imu_pitch
{
public:
  explicit Init_Imu_pitch(::pndrobotros2::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_roll pitch(::pndrobotros2::msg::Imu::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Imu_roll(msg_);
  }

private:
  ::pndrobotros2::msg::Imu msg_;
};

class Init_Imu_yaw
{
public:
  Init_Imu_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_pitch yaw(::pndrobotros2::msg::Imu::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Imu_pitch(msg_);
  }

private:
  ::pndrobotros2::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pndrobotros2::msg::Imu>()
{
  return pndrobotros2::msg::builder::Init_Imu_yaw();
}

}  // namespace pndrobotros2

#endif  // PNDROBOTROS2__MSG__DETAIL__IMU__BUILDER_HPP_
