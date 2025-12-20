add_library(ParaBoxEngine INTERFACE)

add_subdirectory(core)
add_subdirectory(renderer)

target_link_libraries(ParaBoxEngine INTERFACE
        ParaBoxCore
        ParaBoxRenderer
        glfw
        glad
)
