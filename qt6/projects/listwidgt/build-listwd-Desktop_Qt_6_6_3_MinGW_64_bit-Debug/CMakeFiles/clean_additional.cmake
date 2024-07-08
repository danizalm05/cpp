# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\listwd_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\listwd_autogen.dir\\ParseCache.txt"
  "listwd_autogen"
  )
endif()
