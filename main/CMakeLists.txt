file(GLOB_RECURSE SOURCES "*.c")
idf_component_register(
        SRCS ${SOURCES}
        INCLUDE_DIRS "include"
        EMBED_FILES "www/uwings.ico"
        "www/index_ov2640.html.gz"
        "www/index_ov3660.html.gz"
        "www/index_ov5640.html.gz"
        "www/monitor.html.gz")
