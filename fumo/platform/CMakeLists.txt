add_library(fumo_platform src/window.cpp)
target_include_directories(fumo_platform PUBLIC include)
target_link_libraries(fumo_platform fmt)