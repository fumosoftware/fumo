//
// fumo_main implementation — lives in the engine library, so it may freely use
// internal (src/) headers that the public umbrella must not expose.
//

#include <fumo/fumo.hpp>                 // the public declaration (api/)
#include <fumo/platform/window.hpp>      // internal (src/) — not reachable by app code
#include <fmt/printf.h>

namespace fumo {
    int fumo_main(int argc, char** argv) {
        fmt::print("Hello, {}", "world");
        fumo::platform::Window window;
        return 0;
    }
}
