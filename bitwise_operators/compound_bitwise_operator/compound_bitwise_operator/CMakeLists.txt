# CMakeList.txt : CMake project for compound_bitwise_operator, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (compound_bitwise_operator "compound_bitwise_operator.cpp" "compound_bitwise_operator.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET compound_bitwise_operator PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
