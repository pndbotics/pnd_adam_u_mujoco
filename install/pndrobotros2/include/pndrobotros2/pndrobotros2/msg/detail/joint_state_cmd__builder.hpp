// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__BUILDER_HPP_
#define PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pndrobotros2/msg/detail/joint_state_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pndrobotros2
{

namespace msg
{

namespace builder
{

class Init_JointStateCmd_hands_d
{
public:
  explicit Init_JointStateCmd_hands_d(::pndrobotros2::msg::JointStateCmd & msg)
  : msg_(msg)
  {}
  ::pndrobotros2::msg::JointStateCmd hands_d(::pndrobotros2::msg::JointStateCmd::_hands_d_type arg)
  {
    msg_.hands_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pndrobotros2::msg::JointStateCmd msg_;
};

class Init_JointStateCmd_tau_d
{
public:
  explicit Init_JointStateCmd_tau_d(::pndrobotros2::msg::JointStateCmd & msg)
  : msg_(msg)
  {}
  Init_JointStateCmd_hands_d tau_d(::pndrobotros2::msg::JointStateCmd::_tau_d_type arg)
  {
    msg_.tau_d = std::move(arg);
    return Init_JointStateCmd_hands_d(msg_);
  }

private:
  ::pndrobotros2::msg::JointStateCmd msg_;
};

class Init_JointStateCmd_q_dot_d
{
public:
  explicit Init_JointStateCmd_q_dot_d(::pndrobotros2::msg::JointStateCmd & msg)
  : msg_(msg)
  {}
  Init_JointStateCmd_tau_d q_dot_d(::pndrobotros2::msg::JointStateCmd::_q_dot_d_type arg)
  {
    msg_.q_dot_d = std::move(arg);
    return Init_JointStateCmd_tau_d(msg_);
  }

private:
  ::pndrobotros2::msg::JointStateCmd msg_;
};

class Init_JointStateCmd_q_d
{
public:
  Init_JointStateCmd_q_d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointStateCmd_q_dot_d q_d(::pndrobotros2::msg::JointStateCmd::_q_d_type arg)
  {
    msg_.q_d = std::move(arg);
    return Init_JointStateCmd_q_dot_d(msg_);
  }

private:
  ::pndrobotros2::msg::JointStateCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pndrobotros2::msg::JointStateCmd>()
{
  return pndrobotros2::msg::builder::Init_JointStateCmd_q_d();
}

}  // namespace pndrobotros2

#endif  // PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__BUILDER_HPP_
