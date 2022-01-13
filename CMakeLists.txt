cmake_minimum_required(VERSION 3.22.1)
project(ampere)

set(CMAKE_C_COMPILER "D:/MSYS2/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "D:/MSYS2/mingw64/bin/g++.exe")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(modules/spdlog/include)

file(GLOB SOURCES "./src/*.h" "./src/*.cpp" "./src/*.hpp" "./src/**/*.cpp" "./src/**/*.hpp")
file(GLOB HEADERS include/*.h)

add_library(ampere SHARED ${SOURCES})
set_target_properties(ampere PROPERTIES PUBLIC_HEADER src/Ampere.h)
target_include_directories(ampere PRIVATE src)

install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})
install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})

add_compile_definitions(" AMP_BUILD_DLL")
add_compile_definitions(" AMP_PLATFORM_WINDOWS")