# Install script for directory: /mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/src

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
  foreach(file
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2.3.4"
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2.3.4;/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib/libqca-qt5.so.2.3.4"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib/libqca-qt5.so.2"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2.3.4"
      "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/libqca-qt5.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu" TYPE SHARED_LIBRARY FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib/libqca-qt5.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/libqca-qt5.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qcaprovider.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/QtCrypto;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_export.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_support.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_tools.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_core.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_textfilter.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_basic.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_publickey.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_cert.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_keystore.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_securelayer.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_securemessage.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_version.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qpipe.h;/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto/qca_safetimer.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include/x86_64-linux-gnu/qt5/Qca-qt5/QtCrypto" TYPE FILE FILES
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qcaprovider.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/QtCrypto"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_export.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_support.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_tools.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_core.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_textfilter.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_basic.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_publickey.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_cert.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_keystore.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_securelayer.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_securemessage.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/qca_version.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qpipe.h"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/include/QtCrypto/qca_safetimer.h"
    )
endif()

