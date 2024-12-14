// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_package:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#ifndef CPP_PACKAGE__SRV__DETAIL__CAPITAL_FULL_NAME__TRAITS_HPP_
#define CPP_PACKAGE__SRV__DETAIL__CAPITAL_FULL_NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_package/srv/detail/capital_full_name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const CapitalFullName_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: surname
  {
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CapitalFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: surname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "surname: ";
    rosidl_generator_traits::value_to_yaml(msg.surname, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapitalFullName_Request & msg, bool use_flow_style = false)
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

}  // namespace cpp_package

namespace rosidl_generator_traits
{

[[deprecated("use cpp_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_package::srv::CapitalFullName_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_package::srv::CapitalFullName_Request & msg)
{
  return cpp_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_package::srv::CapitalFullName_Request>()
{
  return "cpp_package::srv::CapitalFullName_Request";
}

template<>
inline const char * name<cpp_package::srv::CapitalFullName_Request>()
{
  return "cpp_package/srv/CapitalFullName_Request";
}

template<>
struct has_fixed_size<cpp_package::srv::CapitalFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_package::srv::CapitalFullName_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_package::srv::CapitalFullName_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const CapitalFullName_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: capitalfullname
  {
    out << "capitalfullname: ";
    rosidl_generator_traits::value_to_yaml(msg.capitalfullname, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CapitalFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: capitalfullname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capitalfullname: ";
    rosidl_generator_traits::value_to_yaml(msg.capitalfullname, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapitalFullName_Response & msg, bool use_flow_style = false)
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

}  // namespace cpp_package

namespace rosidl_generator_traits
{

[[deprecated("use cpp_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_package::srv::CapitalFullName_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_package::srv::CapitalFullName_Response & msg)
{
  return cpp_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_package::srv::CapitalFullName_Response>()
{
  return "cpp_package::srv::CapitalFullName_Response";
}

template<>
inline const char * name<cpp_package::srv::CapitalFullName_Response>()
{
  return "cpp_package/srv/CapitalFullName_Response";
}

template<>
struct has_fixed_size<cpp_package::srv::CapitalFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_package::srv::CapitalFullName_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_package::srv::CapitalFullName_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_package::srv::CapitalFullName>()
{
  return "cpp_package::srv::CapitalFullName";
}

template<>
inline const char * name<cpp_package::srv::CapitalFullName>()
{
  return "cpp_package/srv/CapitalFullName";
}

template<>
struct has_fixed_size<cpp_package::srv::CapitalFullName>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_package::srv::CapitalFullName_Request>::value &&
    has_fixed_size<cpp_package::srv::CapitalFullName_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_package::srv::CapitalFullName>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_package::srv::CapitalFullName_Request>::value &&
    has_bounded_size<cpp_package::srv::CapitalFullName_Response>::value
  >
{
};

template<>
struct is_service<cpp_package::srv::CapitalFullName>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_package::srv::CapitalFullName_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_package::srv::CapitalFullName_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_PACKAGE__SRV__DETAIL__CAPITAL_FULL_NAME__TRAITS_HPP_