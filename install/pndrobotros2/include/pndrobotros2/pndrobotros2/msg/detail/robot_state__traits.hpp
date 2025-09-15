// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pndrobotros2:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pndrobotros2/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pndrobotros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: q_a
  {
    if (msg.q_a.size() == 0) {
      out << "q_a: []";
    } else {
      out << "q_a: [";
      size_t pending_items = msg.q_a.size();
      for (auto item : msg.q_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_dot_a
  {
    if (msg.q_dot_a.size() == 0) {
      out << "q_dot_a: []";
    } else {
      out << "q_dot_a: [";
      size_t pending_items = msg.q_dot_a.size();
      for (auto item : msg.q_dot_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_a
  {
    if (msg.tau_a.size() == 0) {
      out << "tau_a: []";
    } else {
      out << "tau_a: [";
      size_t pending_items = msg.tau_a.size();
      for (auto item : msg.tau_a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hands_a
  {
    if (msg.hands_a.size() == 0) {
      out << "hands_a: []";
    } else {
      out << "hands_a: [";
      size_t pending_items = msg.hands_a.size();
      for (auto item : msg.hands_a) {
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
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_a.size() == 0) {
      out << "q_a: []\n";
    } else {
      out << "q_a:\n";
      for (auto item : msg.q_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_dot_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_dot_a.size() == 0) {
      out << "q_dot_a: []\n";
    } else {
      out << "q_dot_a:\n";
      for (auto item : msg.q_dot_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau_a.size() == 0) {
      out << "tau_a: []\n";
    } else {
      out << "tau_a:\n";
      for (auto item : msg.tau_a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hands_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hands_a.size() == 0) {
      out << "hands_a: []\n";
    } else {
      out << "hands_a:\n";
      for (auto item : msg.hands_a) {
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

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const pndrobotros2::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pndrobotros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pndrobotros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const pndrobotros2::msg::RobotState & msg)
{
  return pndrobotros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pndrobotros2::msg::RobotState>()
{
  return "pndrobotros2::msg::RobotState";
}

template<>
inline const char * name<pndrobotros2::msg::RobotState>()
{
  return "pndrobotros2/msg/RobotState";
}

template<>
struct has_fixed_size<pndrobotros2::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pndrobotros2::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pndrobotros2::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PNDROBOTROS2__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
