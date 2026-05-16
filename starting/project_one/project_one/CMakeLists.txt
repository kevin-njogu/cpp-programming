# CMakeList.txt : CMake project for project_one, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (project_one "project_one.cpp" "project_one.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET project_one PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
