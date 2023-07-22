# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_originbot_navigation_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED originbot_navigation_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(originbot_navigation_FOUND FALSE)
  elseif(NOT originbot_navigation_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(originbot_navigation_FOUND FALSE)
  endif()
  return()
endif()
set(_originbot_navigation_CONFIG_INCLUDED TRUE)

# output package information
if(NOT originbot_navigation_FIND_QUIETLY)
  message(STATUS "Found originbot_navigation: 0.0.0 (${originbot_navigation_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'originbot_navigation' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${originbot_navigation_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(originbot_navigation_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${originbot_navigation_DIR}/${_extra}")
endforeach()
