add_library(Core
        CreateWindow.cpp
        core.cpp
        GameObject/Triangle.cpp
        GameObject/Triangle.h
)
add_subdirectory(GameObject)
target_include_directories(Core PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Core PUBLIC
        glad
        glfw
)
