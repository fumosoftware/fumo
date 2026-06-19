add_subdirectory(platform)

add_library(fumo INTERFACE include/fumo/fumo.hpp)
target_link_libraries(fumo INTERFACE fumo_platform fmt)
target_include_directories(fumo INTERFACE include)