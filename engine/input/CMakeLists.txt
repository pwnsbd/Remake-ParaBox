add_library(Input Input.cpp)

target_include_directories(Input PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Input PRIVATE
        glad
        glfw
)