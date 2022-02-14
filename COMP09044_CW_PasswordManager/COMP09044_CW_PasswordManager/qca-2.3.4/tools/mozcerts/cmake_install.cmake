# Install script for directory: /mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/tools/mozcerts

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/qt5/bin/mozcerts-qt5")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/qt5/bin" TYPE EXECUTABLE FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/bin/mozcerts-qt5")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5"
         OLD_RPATH "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/qt5/bin/mozcerts-qt5")
    endif()
  endif()
endif()

