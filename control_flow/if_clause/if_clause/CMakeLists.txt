# CMakeList.txt : CMake project for if_clause, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (if_clause "if_clause.cpp" "if_clause.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET if_clause PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
