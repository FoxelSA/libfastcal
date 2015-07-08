CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(libfastcal C)

# guard against in-source builds
IF(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "In-source builds not allowed.")
ENDIF()

# By default build in Release mode
IF(NOT CMAKE_BUILD_TYPE AND NOT MSVC)
  SET(CMAKE_BUILD_TYPE "Release")
ENDIF(NOT CMAKE_BUILD_TYPE AND NOT MSVC)

# ==============================================================================
# Compilation configuration
# ==============================================================================
IF (UNIX)
  SET(CMAKE_C_FLAGS_RELEASE "-Wall -funsigned-char -O3")
  SET(CMAKE_CXX_FLAGS_RELEASE "-Wall -funsigned-char -O3")
ENDIF ()


# ==============================================================================
# Library
# ==============================================================================
SET(LIBFASTCAL_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/src)

FILE(
  GLOB_RECURSE
  header_files
  *.h
)

FILE(
  GLOB_RECURSE
  source_files
  *.c
)

SET_SOURCE_FILES_PROPERTIES(${source_files} PROPERTIES LANGUAGE C)
ADD_LIBRARY(libfastcal ${source_files} ${header_files})
