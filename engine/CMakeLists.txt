add_library(ParaBoxEngine Engine.cpp)

add_subdirectory(core)
add_subdirectory(renderer)
add_subdirectory(Input_handling)

target_link_libraries(ParaBoxEngine PUBLIC
        ParaBoxCore
        ParaBoxRenderer
        Input_Handling
)
