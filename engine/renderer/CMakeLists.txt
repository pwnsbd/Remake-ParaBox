add_library(ParaBoxRenderer INTERFACE)

target_include_directories(ParaBoxRenderer INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(ParaBoxRenderer INTERFACE
        glad
        OpenGL::GL
)
