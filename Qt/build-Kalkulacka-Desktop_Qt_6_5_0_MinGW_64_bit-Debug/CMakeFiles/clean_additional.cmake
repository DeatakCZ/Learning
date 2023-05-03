# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Kalkulacka_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Kalkulacka_autogen.dir\\ParseCache.txt"
  "Kalkulacka_autogen"
  )
endif()
