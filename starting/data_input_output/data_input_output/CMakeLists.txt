# CMakeList.txt : CMake project for data_input_output, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (data_input_output "data_input_output.cpp" "data_input_output.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET data_input_output PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
