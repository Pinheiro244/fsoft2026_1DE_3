cmake_minimum_required(VERSION 3.16)
project(fsoft2026_1DE_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(headers)
include_directories(headers/model)
include_directories(headers/repo)
include_directories(headers/service)
include_directories(headers/view)
include_directories(headers/controller)
include_directories(headers/dto)
include_directories(headers/exceptions)
include_directories(headers/mappers)

add_executable(fsoft2026_1DE_3
        main.cpp

        Sources/model/person.cpp
        Sources/model/student.cpp
        Sources/model/studentcontainer.cpp
        Sources/model/trainingplan.cpp
        Sources/model/trainingplancontainer.cpp
        Sources/model/Matricula.cpp
        Sources/model/MatriculaContainer.cpp
        Sources/model/school.cpp

        Sources/repo/SchoolMemoryRepository.cpp

        Sources/service/StudentService.cpp
        Sources/service/TrainingPlanService.cpp
        Sources/service/MatriculaService.cpp

        Sources/view/view.cpp
        Sources/view/utils.cpp
        Sources/view/StudentView.cpp
        Sources/view/TrainingPlanView.cpp
        Sources/view/MatriculaView.cpp

        Sources/controllers/controllers.cpp

        Sources/mappers/StudentMapper.cpp
        Sources/mappers/TrainingPlanMapper.cpp
        Sources/mappers/MatriculaMapper.cpp

        Sources/exceptions/ApplicationException.cpp
        Sources/exceptions/DataConsistencyException.cpp
        Sources/exceptions/DuplicatedDataException.cpp
        Sources/exceptions/InvalidDataException.cpp
        Sources/exceptions/NotFoundException.cpp
)