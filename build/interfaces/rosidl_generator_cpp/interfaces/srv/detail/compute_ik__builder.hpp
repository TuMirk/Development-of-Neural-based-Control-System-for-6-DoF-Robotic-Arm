// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/ComputeIK.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__COMPUTE_IK__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__COMPUTE_IK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/compute_ik__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeIK_Request_col
{
public:
  explicit Init_ComputeIK_Request_col(::interfaces::srv::ComputeIK_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::ComputeIK_Request col(::interfaces::srv::ComputeIK_Request::_col_type arg)
  {
    msg_.col = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ComputeIK_Request msg_;
};

class Init_ComputeIK_Request_row
{
public:
  Init_ComputeIK_Request_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeIK_Request_col row(::interfaces::srv::ComputeIK_Request::_row_type arg)
  {
    msg_.row = std::move(arg);
    return Init_ComputeIK_Request_col(msg_);
  }

private:
  ::interfaces::srv::ComputeIK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ComputeIK_Request>()
{
  return interfaces::srv::builder::Init_ComputeIK_Request_row();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ComputeIK_Response_integer_values
{
public:
  Init_ComputeIK_Response_integer_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ComputeIK_Response integer_values(::interfaces::srv::ComputeIK_Response::_integer_values_type arg)
  {
    msg_.integer_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ComputeIK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ComputeIK_Response>()
{
  return interfaces::srv::builder::Init_ComputeIK_Response_integer_values();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__COMPUTE_IK__BUILDER_HPP_
