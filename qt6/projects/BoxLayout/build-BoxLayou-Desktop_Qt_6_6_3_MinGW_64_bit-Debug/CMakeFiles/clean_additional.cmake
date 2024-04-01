# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BoxLayou_autogen"
  "CMakeFiles\\BoxLayou_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BoxLayou_autogen.dir\\ParseCache.txt"
  )
endif()
