cmake_minimum_required(VERSION 3.8)
project(cpp_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/CapitalFullName.srv"
  DEPENDENCIES std_msgs
)

set(common_dependencies rclcpp std_msgs example_interfaces rosidl_default_runtime)
set(common_compile_features c_std_99 cxx_std_17)
set(common_include_dirs
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

foreach(target cpp_try cpp_try2 publisher subscriber service client)
  add_executable(${target} src/${target}.cpp)
  target_include_directories(${target} PUBLIC ${common_include_dirs})
  target_compile_features(${target} PUBLIC ${common_compile_features})
  ament_target_dependencies(${target} ${common_dependencies})
endforeach()

foreach(target service_class client_class)
  add_executable(${target} src/${target}.cpp)
  target_include_directories(${target} PUBLIC ${common_include_dirs})
  target_compile_features(${target} PUBLIC ${common_compile_features})
  ament_target_dependencies(${target} ${common_dependencies})
  rosidl_get_typesupport_target(typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
  target_link_libraries(${target} ${typesupport_target})
  endforeach()


# Install targets
install(TARGETS 
        cpp_try 
        cpp_try2 
        subscriber 
        publisher 
        service 
        client 
        service_class 
        client_class
  DESTINATION lib/${PROJECT_NAME})

ament_package()
