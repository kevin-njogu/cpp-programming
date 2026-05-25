# CMakeList.txt : CMake project for switch_statement, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (switch_statement "switch_statement.cpp" "switch_statement.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET switch_statement PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
