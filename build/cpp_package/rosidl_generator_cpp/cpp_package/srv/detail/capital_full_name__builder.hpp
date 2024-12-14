// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_package:srv/CapitalFullName.idl
// generated code does not contain a copyright notice

#ifndef CPP_PACKAGE__SRV__DETAIL__CAPITAL_FULL_NAME__BUILDER_HPP_
#define CPP_PACKAGE__SRV__DETAIL__CAPITAL_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_package/srv/detail/capital_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_package
{

namespace srv
{

namespace builder
{

class Init_CapitalFullName_Request_surname
{
public:
  explicit Init_CapitalFullName_Request_surname(::cpp_package::srv::CapitalFullName_Request & msg)
  : msg_(msg)
  {}
  ::cpp_package::srv::CapitalFullName_Request surname(::cpp_package::srv::CapitalFullName_Request::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_package::srv::CapitalFullName_Request msg_;
};

class Init_CapitalFullName_Request_name
{
public:
  Init_CapitalFullName_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CapitalFullName_Request_surname name(::cpp_package::srv::CapitalFullName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CapitalFullName_Request_surname(msg_);
  }

private:
  ::cpp_package::srv::CapitalFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_package::srv::CapitalFullName_Request>()
{
  return cpp_package::srv::builder::Init_CapitalFullName_Request_name();
}

}  // namespace cpp_package


namespace cpp_package
{

namespace srv
{

namespace builder
{

class Init_CapitalFullName_Response_capitalfullname
{
public:
  Init_CapitalFullName_Response_capitalfullname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_package::srv::CapitalFullName_Response capitalfullname(::cpp_package::srv::CapitalFullName_Response::_capitalfullname_type arg)
  {
    msg_.capitalfullname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_package::srv::CapitalFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_package::srv::CapitalFullName_Response>()
{
  return cpp_package::srv::builder::Init_CapitalFullName_Response_capitalfullname();
}

}  // namespace cpp_package

#endif  // CPP_PACKAGE__SRV__DETAIL__CAPITAL_FULL_NAME__BUILDER_HPP_
