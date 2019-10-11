cmake_minimum_required(VERSION 2.8.3)
project(Opgaver)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED
    roscpp
)


## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES Opgaver
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
 ${catkin_INCLUDE_DIRS}
)



## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide
add_executable(${PROJECT_NAME}_Turtleroundweeee src/Turtleroundweeee.cpp)
set_target_properties(${PROJECT_NAME}_Turtleroundweeee PROPERTIES OUTPUT_NAME Turtleroundweeee PREFIX "")
target_link_libraries(${PROJECT_NAME}_Turtleroundweeee
  ${catkin_LIBRARIES}
)



## Specify libraries to link a library or executable target against
 #target_link_libraries(${PROJECT_NAME}_node
 #  ${catkin_LIBRARIES}
 #)


 install(TARGETS
 ${PROJECT_NAME}_Turtleroundweeee
 RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)