# Install script for directory: /mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/aes-cmac/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/base64test/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/certtest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/ciphertest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/cms/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/eventhandlerdemo/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/hashtest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/hextest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/keyloader/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/mactest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/md5crypt/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/providertest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/publickeyexample/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/randomtest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/rsatest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/saslclient/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/saslserver/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/ssltest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/sslservtest/cmake_install.cmake")
  include("/mnt/15f210d7-aa4f-4ea8-a4b3-2bd52aeba8fc/Programming/Uni/Algorithms & Collections/PROJECT/COMP09044_CW_PasswordManager/COMP09044_CW_PasswordManager/qca-2.3.4/examples/tlssocket/cmake_install.cmake")

endif()

