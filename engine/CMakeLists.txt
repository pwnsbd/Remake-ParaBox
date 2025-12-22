add_library(Engine Engine.cpp)

add_subdirectory(core)
add_subdirectory(renderer)
add_subdirectory(Input)
add_subdirectory(window)


target_include_directories(Window PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Engine PUBLIC
        Core
        Renderer
        Input
        Window
)
