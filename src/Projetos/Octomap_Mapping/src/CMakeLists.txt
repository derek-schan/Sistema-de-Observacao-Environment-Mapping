
#About this project
#------------------
project(Octomap_Mapper)


#Including the directories of the header files
INCLUDE_DIRECTORIES(${Octomap_Mapping_SOURCE_DIR}/include)
#INCLUDE_DIRECTORIES(/opt/ros/indigo/include/octomap)


#Creating variables to contain folders paths (Para que os headers sejam mostrados no QT)
SET(Octomap_Mapping_HEADERS_FOLDER "${Octomap_Mapping_SOURCE_DIR}/include")


#Setting variables to contain sources of libraries
SET(Octomap_Library_HEADERS "${Octomap_Mapping_HEADERS_FOLDER}/octomap_library.h")
SET(Octomap_Library_SOURCES "octomap_library.cpp")


#Creating libraries
add_library(Octomap_Library SHARED ${Octomap_Library_HEADERS} ${Octomap_Library_SOURCES})



#Setting variables to contain sources of executables
SET(Octomap_Mapping_SOURCES "main.cpp")


#Creating the executables
add_executable(Octomap_Mapping ${Octomap_Mapping_SOURCES})
#Link to the executable from the libraries
target_link_libraries(Octomap_Mapping Octomap_Library)





#Configure Install
install(TARGETS Octomap_Mapping
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)





#SET(Octomap_Mapping_HEADERS
#    octomap_library.h
#)

#SET(Octomap_Mapping_SOURCES
#    main.cpp
#    octomap_library.cpp
#)


#INCLUDE_DIRECTORIES(${Octomap_Mapping_SOURCE_DIR}/include)
#ADD_LIBRARY(${Octomap_Mapping_SOURCE_DIR}/lib/OCTOMAP_LIBRARY octomap_library.cpp)

#ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)

##SET(Octomap_Mapping_SOURCES
##    main.cpp
##    octomap_library.cpp
##)

##add_executable(${PROJECT_NAME} ${Octomap_Mapping_SOURCES})


#TARGET_LINK_LIBRARIES(${Octomap_Mapping_SOURCE_DIR}/lib/OCTOMAP_LIBRARY)
