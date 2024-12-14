// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_package:srv/SayName.idl
// generated code does not contain a copyright notice

#ifndef CPP_PACKAGE__SRV__DETAIL__SAY_NAME__STRUCT_H_
#define CPP_PACKAGE__SRV__DETAIL__SAY_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'surname'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SayName in the package cpp_package.
typedef struct cpp_package__srv__SayName_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String surname;
} cpp_package__srv__SayName_Request;

// Struct for a sequence of cpp_package__srv__SayName_Request.
typedef struct cpp_package__srv__SayName_Request__Sequence
{
  cpp_package__srv__SayName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_package__srv__SayName_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'fullname'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SayName in the package cpp_package.
typedef struct cpp_package__srv__SayName_Response
{
  rosidl_runtime_c__String fullname;
} cpp_package__srv__SayName_Response;

// Struct for a sequence of cpp_package__srv__SayName_Response.
typedef struct cpp_package__srv__SayName_Response__Sequence
{
  cpp_package__srv__SayName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_package__srv__SayName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_PACKAGE__SRV__DETAIL__SAY_NAME__STRUCT_H_
