// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:srv/ControlMotor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/srv/detail/control_motor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ControlMotor_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::srv::ControlMotor_Request(_init);
}

void ControlMotor_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::srv::ControlMotor_Request *>(message_memory);
  typed_message->~ControlMotor_Request();
}

size_t size_function__ControlMotor_Request__integer_values(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__ControlMotor_Request__integer_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlMotor_Request__integer_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControlMotor_Request__integer_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ControlMotor_Request__integer_values(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ControlMotor_Request__integer_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ControlMotor_Request__integer_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControlMotor_Request_message_member_array[1] = {
  {
    "integer_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ControlMotor_Request, integer_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlMotor_Request__integer_values,  // size() function pointer
    get_const_function__ControlMotor_Request__integer_values,  // get_const(index) function pointer
    get_function__ControlMotor_Request__integer_values,  // get(index) function pointer
    fetch_function__ControlMotor_Request__integer_values,  // fetch(index, &value) function pointer
    assign_function__ControlMotor_Request__integer_values,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControlMotor_Request_message_members = {
  "interfaces::srv",  // message namespace
  "ControlMotor_Request",  // message name
  1,  // number of fields
  sizeof(interfaces::srv::ControlMotor_Request),
  ControlMotor_Request_message_member_array,  // message members
  ControlMotor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlMotor_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControlMotor_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlMotor_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::ControlMotor_Request>()
{
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ControlMotor_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, ControlMotor_Request)() {
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ControlMotor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces/srv/detail/control_motor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void ControlMotor_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::srv::ControlMotor_Response(_init);
}

void ControlMotor_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::srv::ControlMotor_Response *>(message_memory);
  typed_message->~ControlMotor_Response();
}

size_t size_function__ControlMotor_Response__final_joint_angles(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ControlMotor_Response__final_joint_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlMotor_Response__final_joint_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControlMotor_Response__final_joint_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ControlMotor_Response__final_joint_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ControlMotor_Response__final_joint_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ControlMotor_Response__final_joint_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControlMotor_Response_message_member_array[1] = {
  {
    "final_joint_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(interfaces::srv::ControlMotor_Response, final_joint_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlMotor_Response__final_joint_angles,  // size() function pointer
    get_const_function__ControlMotor_Response__final_joint_angles,  // get_const(index) function pointer
    get_function__ControlMotor_Response__final_joint_angles,  // get(index) function pointer
    fetch_function__ControlMotor_Response__final_joint_angles,  // fetch(index, &value) function pointer
    assign_function__ControlMotor_Response__final_joint_angles,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControlMotor_Response_message_members = {
  "interfaces::srv",  // message namespace
  "ControlMotor_Response",  // message name
  1,  // number of fields
  sizeof(interfaces::srv::ControlMotor_Response),
  ControlMotor_Response_message_member_array,  // message members
  ControlMotor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ControlMotor_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControlMotor_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlMotor_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::srv::ControlMotor_Response>()
{
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ControlMotor_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, ControlMotor_Response)() {
  return &::interfaces::srv::rosidl_typesupport_introspection_cpp::ControlMotor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "interfaces/srv/detail/control_motor__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ControlMotor_service_members = {
  "interfaces::srv",  // service namespace
  "ControlMotor",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<interfaces::srv::ControlMotor>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t ControlMotor_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlMotor_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces::srv::ControlMotor>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::interfaces::srv::rosidl_typesupport_introspection_cpp::ControlMotor_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::srv::ControlMotor_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::interfaces::srv::ControlMotor_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, srv, ControlMotor)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<interfaces::srv::ControlMotor>();
}

#ifdef __cplusplus
}
#endif
