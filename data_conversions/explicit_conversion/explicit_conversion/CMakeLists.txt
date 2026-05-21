# CMakeList.txt : CMake project for explicit_conversion, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (explicit_conversion "explicit_conversion.cpp" "explicit_conversion.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET explicit_conversion PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
