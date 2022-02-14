#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qca-qt5" for configuration ""
set_property(TARGET qca-qt5 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(qca-qt5 PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2.3.4"
  IMPORTED_SONAME_NOCONFIG "libqca-qt5.so.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS qca-qt5 )
list(APPEND _IMPORT_CHECK_FILES_FOR_qca-qt5 "/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2.3.4" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
