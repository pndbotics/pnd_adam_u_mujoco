// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pndrobotros2/msg/detail/joint_state_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pndrobotros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointStateCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pndrobotros2::msg::JointStateCmd(_init);
}

void JointStateCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pndrobotros2::msg::JointStateCmd *>(message_memory);
  typed_message->~JointStateCmd();
}

size_t size_function__JointStateCmd__q_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointStateCmd__q_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStateCmd__q_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStateCmd__q_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointStateCmd__q_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointStateCmd__q_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointStateCmd__q_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointStateCmd__q_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointStateCmd__q_dot_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointStateCmd__q_dot_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStateCmd__q_dot_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStateCmd__q_dot_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointStateCmd__q_dot_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointStateCmd__q_dot_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointStateCmd__q_dot_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointStateCmd__q_dot_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointStateCmd__tau_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointStateCmd__tau_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStateCmd__tau_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStateCmd__tau_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__JointStateCmd__tau_d(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__JointStateCmd__tau_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__JointStateCmd__tau_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__JointStateCmd__tau_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__JointStateCmd__hands_d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__JointStateCmd__hands_d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__JointStateCmd__hands_d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointStateCmd__hands_d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__JointStateCmd__hands_d(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__JointStateCmd__hands_d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__JointStateCmd__hands_d(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__JointStateCmd__hands_d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointStateCmd_message_member_array[4] = {
  {
    "q_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2::msg::JointStateCmd, q_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStateCmd__q_d,  // size() function pointer
    get_const_function__JointStateCmd__q_d,  // get_const(index) function pointer
    get_function__JointStateCmd__q_d,  // get(index) function pointer
    fetch_function__JointStateCmd__q_d,  // fetch(index, &value) function pointer
    assign_function__JointStateCmd__q_d,  // assign(index, value) function pointer
    resize_function__JointStateCmd__q_d  // resize(index) function pointer
  },
  {
    "q_dot_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2::msg::JointStateCmd, q_dot_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStateCmd__q_dot_d,  // size() function pointer
    get_const_function__JointStateCmd__q_dot_d,  // get_const(index) function pointer
    get_function__JointStateCmd__q_dot_d,  // get(index) function pointer
    fetch_function__JointStateCmd__q_dot_d,  // fetch(index, &value) function pointer
    assign_function__JointStateCmd__q_dot_d,  // assign(index, value) function pointer
    resize_function__JointStateCmd__q_dot_d  // resize(index) function pointer
  },
  {
    "tau_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2::msg::JointStateCmd, tau_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStateCmd__tau_d,  // size() function pointer
    get_const_function__JointStateCmd__tau_d,  // get_const(index) function pointer
    get_function__JointStateCmd__tau_d,  // get(index) function pointer
    fetch_function__JointStateCmd__tau_d,  // fetch(index, &value) function pointer
    assign_function__JointStateCmd__tau_d,  // assign(index, value) function pointer
    resize_function__JointStateCmd__tau_d  // resize(index) function pointer
  },
  {
    "hands_d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pndrobotros2::msg::JointStateCmd, hands_d),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointStateCmd__hands_d,  // size() function pointer
    get_const_function__JointStateCmd__hands_d,  // get_const(index) function pointer
    get_function__JointStateCmd__hands_d,  // get(index) function pointer
    fetch_function__JointStateCmd__hands_d,  // fetch(index, &value) function pointer
    assign_function__JointStateCmd__hands_d,  // assign(index, value) function pointer
    resize_function__JointStateCmd__hands_d  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointStateCmd_message_members = {
  "pndrobotros2::msg",  // message namespace
  "JointStateCmd",  // message name
  4,  // number of fields
  sizeof(pndrobotros2::msg::JointStateCmd),
  JointStateCmd_message_member_array,  // message members
  JointStateCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  JointStateCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointStateCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointStateCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pndrobotros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pndrobotros2::msg::JointStateCmd>()
{
  return &::pndrobotros2::msg::rosidl_typesupport_introspection_cpp::JointStateCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pndrobotros2, msg, JointStateCmd)() {
  return &::pndrobotros2::msg::rosidl_typesupport_introspection_cpp::JointStateCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
