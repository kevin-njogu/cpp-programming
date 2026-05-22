# CMakeList.txt : CMake project for printing_integers_as_binary, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (printing_integers_as_binary "printing_integers_as_binary.cpp" "printing_integers_as_binary.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET printing_integers_as_binary PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
