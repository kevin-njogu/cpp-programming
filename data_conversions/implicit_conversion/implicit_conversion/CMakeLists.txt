# CMakeList.txt : CMake project for implicit_conversion, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (implicit_conversion "implicit_conversion.cpp" "implicit_conversion.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET implicit_conversion PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
