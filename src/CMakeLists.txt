add_executable (SFMLTest main.cpp)
set_property (TARGET SFMLTest PROPERTY CXX_STANDARD 14)
target_link_libraries (SFMLTest ${SFML_LIBRARIES} ${FREETYPE_LIBRARIES})
