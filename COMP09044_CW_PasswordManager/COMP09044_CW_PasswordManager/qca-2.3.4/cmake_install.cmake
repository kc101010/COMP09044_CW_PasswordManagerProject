# Install script for directory: /mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/pkgconfig/qca2-qt5.pc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/pkgconfig" TYPE FILE FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib/pkgconfig/qca2-qt5.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features/crypto.prf")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/qt5/mkspecs/features" TYPE FILE FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/mkspecs/features/crypto.prf")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/qt5/man/man1/qcatool-qt5.1")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/qt5/man/man1" TYPE FILE FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/share/man/man1/qcatool-qt5.1")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets.cmake"
         "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/CMakeFiles/Export/_usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5" TYPE FILE FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/CMakeFiles/Export/_usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets-noconfig.cmake")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
        message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5" TYPE FILE FILES "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/CMakeFiles/Export/_usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Targets-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5Config.cmake;/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5/Qca-qt5ConfigVersion.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/x86_64-linux-gnu/cmake/Qca-qt5" TYPE FILE FILES
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib/cmake/Qca-qt5/Qca-qt5Config.cmake"
    "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/lib/cmake/Qca-qt5/Qca-qt5ConfigVersion.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/src/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/plugins/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/unittest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/tools/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
