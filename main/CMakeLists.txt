file(GLOB_RECURSE C_SOURCES "*.c")
file(GLOB_RECURSE CPP_SOURCES "*.cpp")
set(SOURCES ${C_SOURCES} ${CPP_SOURCES})
idf_component_register(
        SRCS ${SOURCES}
        INCLUDE_DIRS "include"
        EMBED_FILES "www/index_ov2640.html.gz"
        "www/index_ov3660.html.gz"
        "www/index_ov5640.html.gz"
        "www/monitor.html.gz")
