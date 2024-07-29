# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\hello03_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\hello03_autogen.dir\\ParseCache.txt"
  "hello03_autogen"
  )
endif()
