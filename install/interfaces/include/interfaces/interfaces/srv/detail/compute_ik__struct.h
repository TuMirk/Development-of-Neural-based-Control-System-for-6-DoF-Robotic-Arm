// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/ComputeIK.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__COMPUTE_IK__STRUCT_H_
#define INTERFACES__SRV__DETAIL__COMPUTE_IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ComputeIK in the package interfaces.
typedef struct interfaces__srv__ComputeIK_Request
{
  int32_t row;
  int32_t col;
} interfaces__srv__ComputeIK_Request;

// Struct for a sequence of interfaces__srv__ComputeIK_Request.
typedef struct interfaces__srv__ComputeIK_Request__Sequence
{
  interfaces__srv__ComputeIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ComputeIK_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ComputeIK in the package interfaces.
typedef struct interfaces__srv__ComputeIK_Response
{
  int32_t integer_values[4];
} interfaces__srv__ComputeIK_Response;

// Struct for a sequence of interfaces__srv__ComputeIK_Response.
typedef struct interfaces__srv__ComputeIK_Response__Sequence
{
  interfaces__srv__ComputeIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ComputeIK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__COMPUTE_IK__STRUCT_H_
