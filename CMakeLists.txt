cmake_minimum_required(VERSION 3.19)
project(trpmcatalog-anvil LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets LinguistTools)

qt_standard_project_setup()

qt_add_executable(trpmcatalog-anvil
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    trpmcatalog_generated.h
    aboutwindow.h aboutwindow.cpp aboutwindow.ui
)

qt_add_translations(
    TARGETS trpmcatalog-anvil
    TS_FILES trpmcatalog-anvil_en_US.ts
)

target_link_libraries(trpmcatalog-anvil
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS trpmcatalog-anvil
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET trpmcatalog-anvil
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
