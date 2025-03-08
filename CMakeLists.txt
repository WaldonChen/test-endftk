cmake_minimum_required(VERSION 3.22)

project(test-endftk)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BUILD_TESTING OFF)
set(ENDFtk.python OFF)
set(tools.installation OFF)
add_subdirectory(ENDFtk)

add_executable(test-endftk main.cc)
target_link_libraries(test-endftk PRIVATE ENDFtk)
