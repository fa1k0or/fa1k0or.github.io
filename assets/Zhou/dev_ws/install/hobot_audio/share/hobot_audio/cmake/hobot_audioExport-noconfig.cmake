#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hobot_audio::hobot_audio" for configuration ""
set_property(TARGET hobot_audio::hobot_audio APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(hobot_audio::hobot_audio PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/hobot_audio"
  )

list(APPEND _IMPORT_CHECK_TARGETS hobot_audio::hobot_audio )
list(APPEND _IMPORT_CHECK_FILES_FOR_hobot_audio::hobot_audio "${_IMPORT_PREFIX}/bin/hobot_audio" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
