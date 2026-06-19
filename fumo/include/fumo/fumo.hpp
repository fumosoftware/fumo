//
// Created by fumo on 6/19/2026.
//

#ifndef FUMO_FUMO_HPP
#define FUMO_FUMO_HPP
#include <fmt/printf.h>
#include <fumo/platform/window.hpp>

namespace fumo {
    int fumo_main(int argc, char **argv) {
        fmt::print("Hello, {}", "world");
        fumo::platform::Window window;
        return 0;
    }
}
#define FUMO_APP \
    int main(int argc, char *argv[]) { return fumo::fumo_main(argc, argv); }
#endif //FUMO_FUMO_HPP