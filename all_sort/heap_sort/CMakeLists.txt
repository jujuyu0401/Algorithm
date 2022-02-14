include_directories(${PROJECT_SOURCE_DIR}/head_files)
aux_source_directory(. HEAP_SOURCES)

add_library(heap_sort ${HEAP_SOURCES})
