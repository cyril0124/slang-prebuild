#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "slang::fmt" for configuration "Release"
set_property(TARGET slang::fmt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(slang::fmt PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libfmt.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS slang::fmt )
list(APPEND _IMPORT_CHECK_FILES_FOR_slang::fmt "${_IMPORT_PREFIX}/lib/libfmt.a" )

# Import target "slang::mimalloc-static" for configuration "Release"
set_property(TARGET slang::mimalloc-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(slang::mimalloc-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmimalloc.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS slang::mimalloc-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_slang::mimalloc-static "${_IMPORT_PREFIX}/lib/libmimalloc.a" )

# Import target "slang::slang" for configuration "Release"
set_property(TARGET slang::slang APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(slang::slang PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsvlang.so.6.0.133"
  IMPORTED_SONAME_RELEASE "libsvlang.so.6"
  )

list(APPEND _IMPORT_CHECK_TARGETS slang::slang )
list(APPEND _IMPORT_CHECK_FILES_FOR_slang::slang "${_IMPORT_PREFIX}/lib/libsvlang.so.6.0.133" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
