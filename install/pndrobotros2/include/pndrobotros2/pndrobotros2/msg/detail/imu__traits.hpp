// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pndrobotros2:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef PNDROBOTROS2__MSG__DETAIL__IMU__TRAITS_HPP_
#define PNDROBOTROS2__MSG__DETAIL__IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pndrobotros2/msg/detail/imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pndrobotros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Imu & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []";
    } else {
      out << "angular_velocity: [";
      size_t pending_items = msg.angular_velocity.size();
      for (auto item : msg.angular_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: linear_acceleration
  {
    if (msg.linear_acceleration.size() == 0) {
      out << "linear_acceleration: []";
    } else {
      out << "linear_acceleration: [";
      size_t pending_items = msg.linear_acceleration.size();
      for (auto item : msg.linear_acceleration) {
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
  const Imu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []\n";
    } else {
      out << "angular_velocity:\n";
      for (auto item : msg.angular_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_acceleration.size() == 0) {
      out << "linear_acceleration: []\n";
    } else {
      out << "linear_acceleration:\n";
      for (auto item : msg.linear_acceleration) {
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

inline std::string to_yaml(const Imu & msg, bool use_flow_style = false)
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
  const pndrobotros2::msg::Imu & msg,
  std::ostream & out, size_t indentation = 0)
{
  pndrobotros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pndrobotros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const pndrobotros2::msg::Imu & msg)
{
  return pndrobotros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pndrobotros2::msg::Imu>()
{
  return "pndrobotros2::msg::Imu";
}

template<>
inline const char * name<pndrobotros2::msg::Imu>()
{
  return "pndrobotros2/msg/Imu";
}

template<>
struct has_fixed_size<pndrobotros2::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pndrobotros2::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pndrobotros2::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PNDROBOTROS2__MSG__DETAIL__IMU__TRAITS_HPP_
