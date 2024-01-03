cmake_minimum_required(VERSION 3.1.3)
project(joint_trajectory_rviz_plugin)

add_compile_options(-std=c++11 -Wno-psabi)

find_package(
  catkin
  REQUIRED COMPONENTS
    class_loader
    pluginlib
    rosconsole
    roscpp
    rospy
    rviz
)

# Qt Stuff
if(rviz_QT_VERSION VERSION_LESS "5")
  find_package(Qt4 ${rviz_QT_VERSION} REQUIRED QtCore QtGui)
  include(${QT_USE_FILE})
  macro(qt_wrap_ui)
    qt4_wrap_ui(${ARGN})
  endmacro()
else()
  find_package(Qt5 ${rviz_QT_VERSION} REQUIRED Core Widgets)
  set(QT_LIBRARIES Qt5::Widgets)
  macro(qt_wrap_ui)
    qt5_wrap_ui(${ARGN})
  endmacro()
endif()

qt_wrap_ui(UIC_FILES
#  /ui/joint_trajectory_rviz_plugin.ui
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
add_definitions(-DQT_NO_KEYWORDS)

catkin_package(
  LIBRARIES
    joint_trajectory_rviz_plugin
  INCLUDE_DIRS
    include
  CATKIN_DEPENDS
    roscpp
    rviz
)

include_directories(
    include
)

include_directories(
  SYSTEM
    ${catkin_INCLUDE_DIRS}
    ${QT_INCLUDE_DIR}
)

add_library(
  joint_trajectory_rviz_plugin
    src/joint_trajectory_rviz_plugin.cpp
)

target_link_libraries(
  joint_trajectory_rviz_plugin
    ${catkin_LIBRARIES}
    ${rviz_DEFAULT_PLUGIN_LIBRARIES}
    ${QT_LIBRARIES}
)

install(
  TARGETS
    joint_trajectory_rviz_plugin
  LIBRARY
  DESTINATION
    ${CATKIN_PACKAGE_LIB_DESTINATION}
)

install(
  FILES
    joint_trajectory_rviz_plugin.xml
  DESTINATION
    ${CATKIN_PACKAGE_SHARE_DESTINATION}
)
