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
        headers/controllers/controller.h
        headers/dto/DateDTO.h
        headers/dto/MatriculaINDTO.h
        headers/dto/MatriculaOUTDTO.h
        mock/MockData.cpp
        mock/MockData.h
        headers/model/studentcontainer.h
        Sources/model/studentcontainer.cpp
        headers/exceptions/ApplicationException.h
        Sources/exceptions/ApplicationException.cpp
        headers/exceptions/InvalidDataException.h
        Sources/exceptions/InvalidDataException.cpp
        headers/exceptions/DuplicatedDataException.h
        Sources/exceptions/DuplicatedDataException.cpp
        headers/exceptions/NotFoundException.h
        Sources/exceptions/NotFoundException.cpp
        headers/exceptions/DataConsistencyException.h
        Sources/exceptions/DataConsistencyException.h.cpp
)

add_executable(FirstProject ${SOURCE_FILES})