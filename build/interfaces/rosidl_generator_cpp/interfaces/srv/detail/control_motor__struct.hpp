// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/ControlMotor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__CONTROL_MOTOR__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__CONTROL_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ControlMotor_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ControlMotor_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlMotor_Request_
{
  using Type = ControlMotor_Request_<ContainerAllocator>;

  explicit ControlMotor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->integer_values.begin(), this->integer_values.end(), 0l);
    }
  }

  explicit ControlMotor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : integer_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->integer_values.begin(), this->integer_values.end(), 0l);
    }
  }

  // field types and members
  using _integer_values_type =
    std::array<int32_t, 4>;
  _integer_values_type integer_values;

  // setters for named parameter idiom
  Type & set__integer_values(
    const std::array<int32_t, 4> & _arg)
  {
    this->integer_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ControlMotor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ControlMotor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ControlMotor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ControlMotor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ControlMotor_Request
    std::shared_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ControlMotor_Request
    std::shared_ptr<interfaces::srv::ControlMotor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMotor_Request_ & other) const
  {
    if (this->integer_values != other.integer_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMotor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMotor_Request_

// alias to use template instance with default allocator
using ControlMotor_Request =
  interfaces::srv::ControlMotor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ControlMotor_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ControlMotor_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlMotor_Response_
{
  using Type = ControlMotor_Response_<ContainerAllocator>;

  explicit ControlMotor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->final_joint_angles.begin(), this->final_joint_angles.end(), 0.0f);
    }
  }

  explicit ControlMotor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final_joint_angles(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 6>::iterator, float>(this->final_joint_angles.begin(), this->final_joint_angles.end(), 0.0f);
    }
  }

  // field types and members
  using _final_joint_angles_type =
    std::array<float, 6>;
  _final_joint_angles_type final_joint_angles;

  // setters for named parameter idiom
  Type & set__final_joint_angles(
    const std::array<float, 6> & _arg)
  {
    this->final_joint_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ControlMotor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ControlMotor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ControlMotor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ControlMotor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ControlMotor_Response
    std::shared_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ControlMotor_Response
    std::shared_ptr<interfaces::srv::ControlMotor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMotor_Response_ & other) const
  {
    if (this->final_joint_angles != other.final_joint_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMotor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMotor_Response_

// alias to use template instance with default allocator
using ControlMotor_Response =
  interfaces::srv::ControlMotor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ControlMotor
{
  using Request = interfaces::srv::ControlMotor_Request;
  using Response = interfaces::srv::ControlMotor_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CONTROL_MOTOR__STRUCT_HPP_
