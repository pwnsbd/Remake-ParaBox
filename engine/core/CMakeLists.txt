add_library(Core
        core.cpp
        GameObject/GameObject.cpp
        Scene.cpp
)
add_subdirectory(GameObject)
target_include_directories(Core PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Core PUBLIC
        glad
        glfw
)
