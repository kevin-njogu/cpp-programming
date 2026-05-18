# CMakeList.txt : CMake project for increment_decrement, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (increment_decrement "increment_decrement.cpp" "increment_decrement.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET increment_decrement PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
