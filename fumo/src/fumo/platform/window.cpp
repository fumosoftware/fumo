//
// Created by fumo on 6/19/2026.
//

#include <fumo/platform/window.hpp>
#include <fmt/printf.h>

namespace fumo {
    namespace platform {
        Window::Window() {
            fmt::print("Im a {}", "evil window");
        }
    } // platform
} // fumo
