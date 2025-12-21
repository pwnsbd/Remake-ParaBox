add_library(Input_Handling Input.cpp)

target_link_libraries(ParaBoxEngine PRIVATE
        glad
        glfw
)