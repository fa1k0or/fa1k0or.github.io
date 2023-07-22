# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_audio_control_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED audio_control_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(audio_control_FOUND FALSE)
  elseif(NOT audio_control_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(audio_control_FOUND FALSE)
  endif()
  return()
endif()
set(_audio_control_CONFIG_INCLUDED TRUE)

# output package information
if(NOT audio_control_FIND_QUIETLY)
  message(STATUS "Found audio_control: 0.0.0 (${audio_control_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'audio_control' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${audio_control_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(audio_control_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${audio_control_DIR}/${_extra}")
endforeach()
