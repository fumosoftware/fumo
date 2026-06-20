//
// fumo — public umbrella header. This is the ONLY header an app includes.
// It declares the entry point + the app macro; engine internals stay hidden in src/.
//

#ifndef FUMO_FUMO_HPP
#define FUMO_FUMO_HPP

namespace fumo {
    // Defined in the engine library (src/fumo.cpp). Keeping it a declaration here
    // means the umbrella never pulls internal headers (platform/rhi/...) into the
    // user's translation unit.
    int fumo_main(int argc, char** argv);
}

#define FUMO_APP \
    int main(int argc, char* argv[]) { return fumo::fumo_main(argc, argv); }

#endif // FUMO_FUMO_HPP
