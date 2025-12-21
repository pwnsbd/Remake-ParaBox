add_library(ParaBoxCore
        CreateWindow.cpp
        core.cpp
        Scene.h
)

target_include_directories(ParaBoxCore PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(ParaBoxCore PUBLIC
        glad
        glfw
)
