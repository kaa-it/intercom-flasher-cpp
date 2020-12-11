cmake_minimum_required(VERSION 3.17)
project(intercom_flasher)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED )

set(CMAKE_PREFIX_PATH "/home/akruglov/bin/Qt/6.0.0/gcc_64")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Gui Widgets LinguistTools)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)

set(TS_FILES intercom_flasher_ru_RU.ts intercom_flasher.cpp intercom_flasher.h intercom_flasher.ui)

add_executable(${PROJECT_NAME} main.cpp ${TS_FILES})

target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})

qt6_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
