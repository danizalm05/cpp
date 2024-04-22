# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\randomGen_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\randomGen_autogen.dir\\ParseCache.txt"
  "randomGen_autogen"
  )
endif()
