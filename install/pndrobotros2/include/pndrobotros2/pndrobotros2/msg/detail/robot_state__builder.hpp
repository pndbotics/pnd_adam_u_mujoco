// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pndrobotros2:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pndrobotros2/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pndrobotros2
{

namespace msg
{

namespace builder
{

class Init_RobotState_hands_a
{
public:
  explicit Init_RobotState_hands_a(::pndrobotros2::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::pndrobotros2::msg::RobotState hands_a(::pndrobotros2::msg::RobotState::_hands_a_type arg)
  {
    msg_.hands_a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pndrobotros2::msg::RobotState msg_;
};

class Init_RobotState_tau_a
{
public:
  explicit Init_RobotState_tau_a(::pndrobotros2::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_hands_a tau_a(::pndrobotros2::msg::RobotState::_tau_a_type arg)
  {
    msg_.tau_a = std::move(arg);
    return Init_RobotState_hands_a(msg_);
  }

private:
  ::pndrobotros2::msg::RobotState msg_;
};

class Init_RobotState_q_dot_a
{
public:
  explicit Init_RobotState_q_dot_a(::pndrobotros2::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_tau_a q_dot_a(::pndrobotros2::msg::RobotState::_q_dot_a_type arg)
  {
    msg_.q_dot_a = std::move(arg);
    return Init_RobotState_tau_a(msg_);
  }

private:
  ::pndrobotros2::msg::RobotState msg_;
};

class Init_RobotState_q_a
{
public:
  Init_RobotState_q_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_q_dot_a q_a(::pndrobotros2::msg::RobotState::_q_a_type arg)
  {
    msg_.q_a = std::move(arg);
    return Init_RobotState_q_dot_a(msg_);
  }

private:
  ::pndrobotros2::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pndrobotros2::msg::RobotState>()
{
  return pndrobotros2::msg::builder::Init_RobotState_q_a();
}

}  // namespace pndrobotros2

#endif  // PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
