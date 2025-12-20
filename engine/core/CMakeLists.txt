add_library(ParaBoxCore
        CreateWindow.cpp
        CreateWindow.h
        Input.cpp
        Input.h
)

target_include_directories(ParaBoxCore PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(ParaBoxCore PUBLIC
        glad
        glfw
)
