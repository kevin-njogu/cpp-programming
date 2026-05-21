# CMakeList.txt : CMake project for constants, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (constants "constants.cpp" "constants.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET constants PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
