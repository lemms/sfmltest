cmake_minimum_required (VERSION 2.6)
project (SFMLTest)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
find_package (SFML 2 COMPONENTS system window graphics audio REQUIRED)
find_package (Freetype REQUIRED)
include_directories(${SFML_INCLUDE_DIR} ${FREETYPE_INCLUDE_DIRS})

add_subdirectory (src)
