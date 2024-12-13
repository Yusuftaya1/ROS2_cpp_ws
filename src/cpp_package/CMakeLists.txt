cmake_minimum_required(VERSION 3.8)
project(cpp_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# Common settings for all executables
set(common_dependencies rclcpp std_msgs)
set(common_compile_features c_std_99 cxx_std_17)
set(common_include_dirs
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

# Add executables
foreach(target cpp_try cpp_try2 publisher subscriber)
  add_executable(${target} src/${target}.cpp)
  target_include_directories(${target} PUBLIC ${common_include_dirs})
  target_compile_features(${target} PUBLIC ${common_compile_features})
  ament_target_dependencies(${target} ${common_dependencies})
endforeach()

# Install targets
install(TARGETS cpp_try cpp_try2 
                publisher subscriber
  DESTINATION lib/${PROJECT_NAME})

ament_package()
