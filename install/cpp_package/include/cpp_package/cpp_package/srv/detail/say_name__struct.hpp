// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_package:srv/SayName.idl
// generated code does not contain a copyright notice

#ifndef CPP_PACKAGE__SRV__DETAIL__SAY_NAME__STRUCT_HPP_
#define CPP_PACKAGE__SRV__DETAIL__SAY_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_package__srv__SayName_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_package__srv__SayName_Request __declspec(deprecated)
#endif

namespace cpp_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SayName_Request_
{
  using Type = SayName_Request_<ContainerAllocator>;

  explicit SayName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->surname = "";
    }
  }

  explicit SayName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    surname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->surname = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _surname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _surname_type surname;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__surname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->surname = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_package::srv::SayName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_package::srv::SayName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_package::srv::SayName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_package::srv::SayName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_package__srv__SayName_Request
    std::shared_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_package__srv__SayName_Request
    std::shared_ptr<cpp_package::srv::SayName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SayName_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->surname != other.surname) {
      return false;
    }
    return true;
  }
  bool operator!=(const SayName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SayName_Request_

// alias to use template instance with default allocator
using SayName_Request =
  cpp_package::srv::SayName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_package


#ifndef _WIN32
# define DEPRECATED__cpp_package__srv__SayName_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_package__srv__SayName_Response __declspec(deprecated)
#endif

namespace cpp_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SayName_Response_
{
  using Type = SayName_Response_<ContainerAllocator>;

  explicit SayName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fullname = "";
    }
  }

  explicit SayName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fullname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fullname = "";
    }
  }

  // field types and members
  using _fullname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fullname_type fullname;

  // setters for named parameter idiom
  Type & set__fullname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fullname = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_package::srv::SayName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_package::srv::SayName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_package::srv::SayName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_package::srv::SayName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_package__srv__SayName_Response
    std::shared_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_package__srv__SayName_Response
    std::shared_ptr<cpp_package::srv::SayName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SayName_Response_ & other) const
  {
    if (this->fullname != other.fullname) {
      return false;
    }
    return true;
  }
  bool operator!=(const SayName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SayName_Response_

// alias to use template instance with default allocator
using SayName_Response =
  cpp_package::srv::SayName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_package

namespace cpp_package
{

namespace srv
{

struct SayName
{
  using Request = cpp_package::srv::SayName_Request;
  using Response = cpp_package::srv::SayName_Response;
};

}  // namespace srv

}  // namespace cpp_package

#endif  // CPP_PACKAGE__SRV__DETAIL__SAY_NAME__STRUCT_HPP_
