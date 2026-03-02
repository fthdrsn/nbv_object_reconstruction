# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_octomap_operations_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED octomap_operations_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(octomap_operations_FOUND FALSE)
  elseif(NOT octomap_operations_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(octomap_operations_FOUND FALSE)
  endif()
  return()
endif()
set(_octomap_operations_CONFIG_INCLUDED TRUE)

# output package information
if(NOT octomap_operations_FIND_QUIETLY)
  message(STATUS "Found octomap_operations: 0.0.0 (${octomap_operations_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'octomap_operations' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT octomap_operations_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(octomap_operations_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${octomap_operations_DIR}/${_extra}")
endforeach()
