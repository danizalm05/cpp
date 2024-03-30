# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\lineEdit_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\lineEdit_autogen.dir\\ParseCache.txt"
  "lineEdit_autogen"
  )
endif()
