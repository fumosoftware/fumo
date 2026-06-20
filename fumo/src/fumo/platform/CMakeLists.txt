# Internal subsystem. Header + source live together here (under src/), so the
# header is reachable only through the PRIVATE internal include base (fumo_internal),
# never by app code.
add_library(fumo_platform OBJECT
        window.cpp)

target_link_libraries(fumo_platform
        PRIVATE fumo_flags        # C++23 (and -fno-exceptions etc. later)
                fumo_internal     # resolves <fumo/platform/window.hpp> from src/
                fmt)
