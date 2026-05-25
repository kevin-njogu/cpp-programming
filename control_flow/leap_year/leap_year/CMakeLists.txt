# CMakeList.txt : CMake project for leap_year, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (leap_year "leap_year.cpp" "leap_year.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET leap_year PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
