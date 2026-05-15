# CMakeList.txt : CMake project for statements_and_functions, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (statements_and_functions "statements_and_functions.cpp" "statements_and_functions.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET statements_and_functions PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
