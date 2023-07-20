# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_parking_search_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED parking_search_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(parking_search_FOUND FALSE)
  elseif(NOT parking_search_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(parking_search_FOUND FALSE)
  endif()
  return()
endif()
set(_parking_search_CONFIG_INCLUDED TRUE)

# output package information
if(NOT parking_search_FIND_QUIETLY)
  message(STATUS "Found parking_search: 0.0.0 (${parking_search_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'parking_search' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${parking_search_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(parking_search_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${parking_search_DIR}/${_extra}")
endforeach()
