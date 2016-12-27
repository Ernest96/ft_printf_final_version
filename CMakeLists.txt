cmake_minimum_required(VERSION 3.5)
project(wide_ft_printf)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES ft_printf.c)
add_executable(wide_ft_printf ${SOURCE_FILES})