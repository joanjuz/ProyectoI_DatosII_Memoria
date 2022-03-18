# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Interfaz_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Interfaz_autogen.dir/ParseCache.txt"
  "Interfaz_autogen"
  )
endif()
