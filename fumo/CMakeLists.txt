# ── shared, engine-internal settings ────────────────────────────────────────
add_library(fumo_flags INTERFACE)                       # compile settings (std now; flags later)
target_compile_features(fumo_flags INTERFACE cxx_std_23)

add_library(fumo_internal INTERFACE)                    # PRIVATE include base for engine TUs:
target_include_directories(fumo_internal                #   internal headers resolve <fumo/...> here
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

# ── internal subsystems ─────────────────────────────────────────────────────
add_subdirectory(src/fumo/platform)

# ── the one library apps link; ONLY api/ is public ──────────────────────────
add_library(fumo STATIC src/fumo.cpp)
add_library(fumo::fumo ALIAS fumo)

# PUBLIC: app code can include <fumo/fumo.hpp> (and nothing else).
target_include_directories(fumo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/api)

target_link_libraries(fumo
        PUBLIC  fumo_flags                  # consumers compile as C++23
        PRIVATE fumo_internal               # fumo.cpp can reach internal headers
                fumo_platform               # OBJECT lib -> its objects embed into `fumo`
                fmt)                         # impl-only dep, stays hidden
