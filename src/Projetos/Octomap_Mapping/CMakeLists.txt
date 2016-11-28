cmake_minimum_required(VERSION 2.8)


#About this project
#------------------
project(Octomap_Mapping)


SET(VERSION_MAJOR "0")
SET(VERSION_MINOR "0")
SET(VERSION_PATCH "0")
SET(VERSION "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")


find_package(octomap REQUIRED)
include_directories(${OCTOMAP_INCLUDE_DIRS})
link_libraries(${OCTOMAP_LIBRARIES})




#Set environment
#---------------
add_definitions(-DDEF_RET_1)





#Adding Subfolders
#-----------------
ADD_SUBDIRECTORY(src)

