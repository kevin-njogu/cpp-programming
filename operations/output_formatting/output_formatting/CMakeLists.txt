# CMakeList.txt : CMake project for output_formatting, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (output_formatting "output_formatting.cpp" "output_formatting.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET output_formatting PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
