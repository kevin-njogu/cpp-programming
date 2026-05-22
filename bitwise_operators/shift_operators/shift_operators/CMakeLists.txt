# CMakeList.txt : CMake project for shift_operators, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (shift_operators "shift_operators.cpp" "shift_operators.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET shift_operators PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
