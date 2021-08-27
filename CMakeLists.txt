project(Cpp-Examples)
cmake_minimum_required(VERSION 2.8.11)

if (WIN32) # Include win64 platforms

  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_FLAGS 
     "/wd4018 /wd4244 /wd4305 
     /D_CRT_SECURE_NO_WARNINGS 
     /D_CRT_NONSTDC_NO_DEPRECATE 
     /D NOMINMAX /DGLEW_STATIC
     /EHsc")

  set(CMAKE_EXE_LINKER_FLAGS "/NODEFAULTLIB:\"MSVCRT\" /NODEFAULTLIB:\"LIBCMT\"")
  set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

elseif (APPLE)

  set(CMAKE_MACOSX_RPATH 1)
  set(CMAKE_CXX_FLAGS "-Wall -Wno-unused-variable -Wno-deprecated-declarations -Wno-unused-but-set-variable -g -stdlib=libc++ -std=c++17")
  set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
  set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
  add_definitions(-DAPPLE)

elseif (UNIX)

  set(CMAKE_CXX_FLAGS "-Wall -g -Wno-unused-variable -Wno-comment -Wno-unused-but-set-variable -std=c++17")
  set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
  set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
  add_definitions(-DUNIX)

endif()

file (GLOB_RECURSE EXAMPLES CONFIGURE_DEPENDS basic/*.cpp)
foreach (example ${EXAMPLES})
  get_filename_component(example_name ${example} NAME_WLE)
  add_executable(${example_name} ${example} ${SHADERS})
  target_link_libraries(${example_name} ${CORE})
endforeach()

add_executable(boxes boxes/boxes.cpp boxes/Box.cpp boxes/Box.h)
target_link_libraries(boxes)

