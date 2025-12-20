add_executable(ParaBox
        main.cpp
        Game.cpp
        Game.h
)

target_link_libraries(ParaBox PRIVATE
        ParaBoxEngine
)
