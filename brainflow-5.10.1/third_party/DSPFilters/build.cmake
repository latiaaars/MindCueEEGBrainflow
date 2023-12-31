SET (DSPFILTERS "DSPFilters")
aux_source_directory (${CMAKE_CURRENT_SOURCE_DIR}/third_party/DSPFilters/source DSPFILTERS_SOURCE_LIB)
add_library (${DSPFILTERS} STATIC ${DSPFILTERS_SOURCE_LIB})
target_include_directories (${DSPFILTERS} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/third_party/DSPFilters/include>)
set_property (TARGET ${DSPFILTERS} PROPERTY POSITION_INDEPENDENT_CODE ON)
target_compile_definitions(${DSPFILTERS} PRIVATE -DNDEBUG)