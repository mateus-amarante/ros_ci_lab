cmake_minimum_required(VERSION 3.5)
project(ros_ci_lab)

find_package(
  ament_cmake REQUIRED
)

# Auto lint
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

add_library(common_operations SHARED src/common_operations.cpp)
target_include_directories(common_operations PUBLIC include)
