# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\fontcomb_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\fontcomb_autogen.dir\\ParseCache.txt"
  "fontcomb_autogen"
  )
endif()
