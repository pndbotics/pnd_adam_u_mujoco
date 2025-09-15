// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pndrobotros2:msg/JointStateCmd.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__TRAITS_HPP_
#define PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pndrobotros2/msg/detail/joint_state_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pndrobotros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointStateCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: q_d
  {
    if (msg.q_d.size() == 0) {
      out << "q_d: []";
    } else {
      out << "q_d: [";
      size_t pending_items = msg.q_d.size();
      for (auto item : msg.q_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_dot_d
  {
    if (msg.q_dot_d.size() == 0) {
      out << "q_dot_d: []";
    } else {
      out << "q_dot_d: [";
      size_t pending_items = msg.q_dot_d.size();
      for (auto item : msg.q_dot_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_d
  {
    if (msg.tau_d.size() == 0) {
      out << "tau_d: []";
    } else {
      out << "tau_d: [";
      size_t pending_items = msg.tau_d.size();
      for (auto item : msg.tau_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hands_d
  {
    if (msg.hands_d.size() == 0) {
      out << "hands_d: []";
    } else {
      out << "hands_d: [";
      size_t pending_items = msg.hands_d.size();
      for (auto item : msg.hands_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointStateCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_d.size() == 0) {
      out << "q_d: []\n";
    } else {
      out << "q_d:\n";
      for (auto item : msg.q_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_dot_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_dot_d.size() == 0) {
      out << "q_dot_d: []\n";
    } else {
      out << "q_dot_d:\n";
      for (auto item : msg.q_dot_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau_d.size() == 0) {
      out << "tau_d: []\n";
    } else {
      out << "tau_d:\n";
      for (auto item : msg.tau_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hands_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hands_d.size() == 0) {
      out << "hands_d: []\n";
    } else {
      out << "hands_d:\n";
      for (auto item : msg.hands_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointStateCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pndrobotros2

namespace rosidl_generator_traits
{

[[deprecated("use pndrobotros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pndrobotros2::msg::JointStateCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  pndrobotros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pndrobotros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const pndrobotros2::msg::JointStateCmd & msg)
{
  return pndrobotros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pndrobotros2::msg::JointStateCmd>()
{
  return "pndrobotros2::msg::JointStateCmd";
}

template<>
inline const char * name<pndrobotros2::msg::JointStateCmd>()
{
  return "pndrobotros2/msg/JointStateCmd";
}

template<>
struct has_fixed_size<pndrobotros2::msg::JointStateCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pndrobotros2::msg::JointStateCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pndrobotros2::msg::JointStateCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PNDROBOTROS2__MSG__DETAIL__JOINT_STATE_CMD__TRAITS_HPP_
