// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_package:srv/SayName.idl
// generated code does not contain a copyright notice

#ifndef CPP_PACKAGE__SRV__DETAIL__SAY_NAME__BUILDER_HPP_
#define CPP_PACKAGE__SRV__DETAIL__SAY_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_package/srv/detail/say_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_package
{

namespace srv
{

namespace builder
{

class Init_SayName_Request_surname
{
public:
  explicit Init_SayName_Request_surname(::cpp_package::srv::SayName_Request & msg)
  : msg_(msg)
  {}
  ::cpp_package::srv::SayName_Request surname(::cpp_package::srv::SayName_Request::_surname_type arg)
  {
    msg_.surname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_package::srv::SayName_Request msg_;
};

class Init_SayName_Request_name
{
public:
  Init_SayName_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SayName_Request_surname name(::cpp_package::srv::SayName_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SayName_Request_surname(msg_);
  }

private:
  ::cpp_package::srv::SayName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_package::srv::SayName_Request>()
{
  return cpp_package::srv::builder::Init_SayName_Request_name();
}

}  // namespace cpp_package


namespace cpp_package
{

namespace srv
{

namespace builder
{

class Init_SayName_Response_fullname
{
public:
  Init_SayName_Response_fullname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_package::srv::SayName_Response fullname(::cpp_package::srv::SayName_Response::_fullname_type arg)
  {
    msg_.fullname = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_package::srv::SayName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_package::srv::SayName_Response>()
{
  return cpp_package::srv::builder::Init_SayName_Response_fullname();
}

}  // namespace cpp_package

#endif  // CPP_PACKAGE__SRV__DETAIL__SAY_NAME__BUILDER_HPP_
