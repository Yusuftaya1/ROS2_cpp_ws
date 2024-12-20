// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_package:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_package/srv/detail/capital_full_name__rosidl_typesupport_introspection_c.h"
#include "cpp_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_package/srv/detail/capital_full_name__functions.h"
#include "cpp_package/srv/detail/capital_full_name__struct.h"


// Include directives for member types
// Member `name`
// Member `surname`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_package__srv__CapitalFullName_Request__init(message_memory);
}

void cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_fini_function(void * message_memory)
{
  cpp_package__srv__CapitalFullName_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_package__srv__CapitalFullName_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "surname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_package__srv__CapitalFullName_Request, surname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_members = {
  "cpp_package__srv",  // message namespace
  "CapitalFullName_Request",  // message name
  2,  // number of fields
  sizeof(cpp_package__srv__CapitalFullName_Request),
  cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_member_array,  // message members
  cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_type_support_handle = {
  0,
  &cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName_Request)() {
  if (!cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_type_support_handle.typesupport_identifier) {
    cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_package__srv__CapitalFullName_Request__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cpp_package/srv/detail/capital_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cpp_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cpp_package/srv/detail/capital_full_name__functions.h"
// already included above
// #include "cpp_package/srv/detail/capital_full_name__struct.h"


// Include directives for member types
// Member `capitalfullname`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_package__srv__CapitalFullName_Response__init(message_memory);
}

void cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_fini_function(void * message_memory)
{
  cpp_package__srv__CapitalFullName_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_member_array[1] = {
  {
    "capitalfullname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_package__srv__CapitalFullName_Response, capitalfullname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_members = {
  "cpp_package__srv",  // message namespace
  "CapitalFullName_Response",  // message name
  1,  // number of fields
  sizeof(cpp_package__srv__CapitalFullName_Response),
  cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_member_array,  // message members
  cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_type_support_handle = {
  0,
  &cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName_Response)() {
  if (!cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_type_support_handle.typesupport_identifier) {
    cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_package__srv__CapitalFullName_Response__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cpp_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cpp_package/srv/detail/capital_full_name__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_members = {
  "cpp_package__srv",  // service namespace
  "CapitalFullName",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_Request_message_type_support_handle,
  NULL  // response message
  // cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_Response_message_type_support_handle
};

static rosidl_service_type_support_t cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_type_support_handle = {
  0,
  &cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName)() {
  if (!cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_type_support_handle.typesupport_identifier) {
    cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_package, srv, CapitalFullName_Response)()->data;
  }

  return &cpp_package__srv__detail__capital_full_name__rosidl_typesupport_introspection_c__CapitalFullName_service_type_support_handle;
}
