# CMakeList.txt : CMake project for else_if, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (else_if "else_if.cpp" "else_if.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET else_if PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
