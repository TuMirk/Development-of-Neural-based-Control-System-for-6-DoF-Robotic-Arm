// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/ControlMotor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONTROL_MOTOR__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__CONTROL_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/srv/detail/control_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlMotor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: integer_values
  {
    if (msg.integer_values.size() == 0) {
      out << "integer_values: []";
    } else {
      out << "integer_values: [";
      size_t pending_items = msg.integer_values.size();
      for (auto item : msg.integer_values) {
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
  const ControlMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: integer_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.integer_values.size() == 0) {
      out << "integer_values: []\n";
    } else {
      out << "integer_values:\n";
      for (auto item : msg.integer_values) {
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

inline std::string to_yaml(const ControlMotor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::ControlMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::ControlMotor_Request & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::ControlMotor_Request>()
{
  return "interfaces::srv::ControlMotor_Request";
}

template<>
inline const char * name<interfaces::srv::ControlMotor_Request>()
{
  return "interfaces/srv/ControlMotor_Request";
}

template<>
struct has_fixed_size<interfaces::srv::ControlMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::ControlMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::ControlMotor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlMotor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_joint_angles
  {
    if (msg.final_joint_angles.size() == 0) {
      out << "final_joint_angles: []";
    } else {
      out << "final_joint_angles: [";
      size_t pending_items = msg.final_joint_angles.size();
      for (auto item : msg.final_joint_angles) {
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
  const ControlMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.final_joint_angles.size() == 0) {
      out << "final_joint_angles: []\n";
    } else {
      out << "final_joint_angles:\n";
      for (auto item : msg.final_joint_angles) {
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

inline std::string to_yaml(const ControlMotor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::srv::ControlMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::srv::ControlMotor_Response & msg)
{
  return interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::srv::ControlMotor_Response>()
{
  return "interfaces::srv::ControlMotor_Response";
}

template<>
inline const char * name<interfaces::srv::ControlMotor_Response>()
{
  return "interfaces/srv/ControlMotor_Response";
}

template<>
struct has_fixed_size<interfaces::srv::ControlMotor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::ControlMotor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::ControlMotor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ControlMotor>()
{
  return "interfaces::srv::ControlMotor";
}

template<>
inline const char * name<interfaces::srv::ControlMotor>()
{
  return "interfaces/srv/ControlMotor";
}

template<>
struct has_fixed_size<interfaces::srv::ControlMotor>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::ControlMotor_Request>::value &&
    has_fixed_size<interfaces::srv::ControlMotor_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::ControlMotor>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::ControlMotor_Request>::value &&
    has_bounded_size<interfaces::srv::ControlMotor_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::ControlMotor>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::ControlMotor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::ControlMotor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__CONTROL_MOTOR__TRAITS_HPP_
