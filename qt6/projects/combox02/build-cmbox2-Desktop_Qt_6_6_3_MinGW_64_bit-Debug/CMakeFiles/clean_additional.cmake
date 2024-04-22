# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\cmbox2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\cmbox2_autogen.dir\\ParseCache.txt"
  "cmbox2_autogen"
  )
endif()
