cmake_minimum_required(VERSION 3.15)

project(win32_lcid_parser)

set(CMAKE_CXX_STANDARD 23)

add_executable(win32_lcid_parser main.cc)
target_precompile_headers(win32_lcid_parser PUBLIC pch.hpp)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")
target_link_libraries(win32_lcid_parser ntdll)
endif()