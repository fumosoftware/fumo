# Bootstrap CPM.cmake (vendor it, or auto-download once):
set(CPM_DOWNLOAD_VERSION 0.42.3)
set(CPM_PATH "${CMAKE_CURRENT_LIST_DIR}/CPM.cmake")
if(NOT EXISTS "${CPM_PATH}")
    file(DOWNLOAD
            https://github.com/cpm-cmake/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake
            "${CPM_PATH}")
endif()
include("${CPM_PATH}")

CPMAddPackage("gh:libsdl-org/SDL#release-3.4.10")
CPMAddPackage("gh:skypjack/entt#v3.16.0")
CPMAddPackage("gh:mackron/miniaudio#0.11.25")
CPMAddPackage("gh:ThePhD/sol2#v3.5.0")
CPMAddPackage("gh:KhronosGroup/SPIRV-Reflect#main")
CPMAddPackage("gh:nothings/stb#master")
CPMAddPackage("gh:walterschell/Lua#v5.4.7")
CPMAddPackage("gh:fmtlib/fmt#12.2.0")
CPMAddPackage(NAME spdlog GITHUB_REPOSITORY gabime/spdlog GIT_TAG v1.17.0
        OPTIONS "SPDLOG_FMT_EXTERNAL ON" "SPDLOG_NO_EXCEPTIONS ON")
CPMAddPackage(NAME glad GITHUB_REPOSITORY Dav1dde/glad GIT_TAG v2.0.8)
# glad2 generates the loader target, e.g.:
#   glad_add_library(glad_gl46 REPRODUCIBLE API gl:core=4.6)   # link in engine_rhi (PRIVATE)