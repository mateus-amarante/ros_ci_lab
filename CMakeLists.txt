cmake_minimum_required(VERSION 3.5)
project(ros_ci_lab)

find_package(
  ament_cmake REQUIRED
)

add_library(common_operations SHARED src/common_operations.cpp)
target_include_directories(common_operations PUBLIC include)

# Auto lint
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  find_package(ament_gtest REQUIRED)

  ament_lint_auto_find_test_dependencies()
  ament_add_gtest(test_common_operations test/test_common_operations.cpp)
  ament_target_dependencies(test_common_operations common_operations)
endif()

ament_package()
