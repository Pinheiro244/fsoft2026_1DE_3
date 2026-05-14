cmake_minimum_required(VERSION 3.31)
project(FirstProject)

set(CMAKE_CXX_STANDARD 20)

set(PROJECT_HEADERS_DIR ${PROJECT_SOURCE_DIR}/headers)
set(PROJECT_SOURCES_DIR ${PROJECT_SOURCE_DIR}/sources)

include_directories(${PROJECT_HEADERS_DIR})

set(SOURCE_FILES
        main.cpp
        ${PROJECT_SOURCES_DIR}/factorial.cpp
        ${PROJECT_SOURCES_DIR}/pl3.cpp
        heathers/controllers/controller.h
        heathers/dto/DateDTO.h
        heathers/dto/MatriculaINDTO.h
        heathers/dto/MatriculaOUTDTO.h
        mock/MockData.cpp
        mock/MockData.h
)

add_executable(FirstProject ${SOURCE_FILES})