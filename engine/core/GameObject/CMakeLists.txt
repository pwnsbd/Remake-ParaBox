add_library(GameObject
        GameObject.cpp
        GameObject.h
)

target_include_directories(GameObject PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
