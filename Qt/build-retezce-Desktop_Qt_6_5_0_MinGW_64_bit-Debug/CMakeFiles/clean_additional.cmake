# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\retezce_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\retezce_autogen.dir\\ParseCache.txt"
  "retezce_autogen"
  )
endif()
