# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\signalSlot_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\signalSlot_autogen.dir\\ParseCache.txt"
  "signalSlot_autogen"
  )
endif()
