# CMakeList.txt : CMake project for integral_logic_operators, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (integral_logic_operators "integral_logic_operators.cpp" "integral_logic_operators.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET integral_logic_operators PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
