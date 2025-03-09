cmake_minimum_required(VERSION 3.22)

project(test-endftk)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BUILD_TESTING OFF)
set(ENDFtk.python OFF)
set(tools.installation OFF)
include(FetchContent)
FetchContent_Declare(ENDFtk
URL             https://github.com/WaldonChen/ENDFtk/archive/refs/tags/v1.1.1.tar.gz
URL_MD5         9bf71715cd99cc052d669da41a8831a6
DOWNLOAD_DIR    ${CMAKE_SOURCE_DIR}/downloads
DOWNLOAD_NAME   ENDFtk-v1.1.1.tar.gz
)
FetchContent_MakeAvailable(ENDFtk)

add_executable(test-endftk main.cc)
target_link_libraries(test-endftk PRIVATE ENDFtk)
