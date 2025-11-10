// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ControlMotor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONTROL_MOTOR__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__CONTROL_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/control_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlMotor_Request_integer_values
{
public:
  Init_ControlMotor_Request_integer_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ControlMotor_Request integer_values(::interfaces::srv::ControlMotor_Request::_integer_values_type arg)
  {
    msg_.integer_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ControlMotor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ControlMotor_Request>()
{
  return interfaces::srv::builder::Init_ControlMotor_Request_integer_values();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlMotor_Response_final_joint_angles
{
public:
  Init_ControlMotor_Response_final_joint_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ControlMotor_Response final_joint_angles(::interfaces::srv::ControlMotor_Response::_final_joint_angles_type arg)
  {
    msg_.final_joint_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ControlMotor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ControlMotor_Response>()
{
  return interfaces::srv::builder::Init_ControlMotor_Response_final_joint_angles();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONTROL_MOTOR__BUILDER_HPP_
