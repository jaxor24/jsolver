cmake_minimum_required (VERSION 3.8)

file(GLOB_RECURSE SOURCES "*.cpp")

add_executable (jsolver_tests ${SOURCES})
target_link_libraries(jsolver_tests PRIVATE jsolver_lib)
target_link_libraries(jsolver_tests PRIVATE jsolver_data)