#ifndef TRAININGPLANSERVICE_H
#define TRAININGPLANSERVICE_H

#include <list>

#include "../repo/ISchoolRepository.h"
#include "../dto/TrainingPlanINDTO.h"
#include "../dto/TrainingPlanOUTDTO.h"
using namespace std;

class TrainingPlanService {

private:
    ISchoolRepository* repo;

public:
    explicit TrainingPlanService(ISchoolRepository* repo);

    void add(const TrainingPlanINDTO& obj);

    void getAll(list<TrainingPlanOUTDTO>& dtos);

    void get(int id, TrainingPlanOUTDTO& dto);

    void remove(int id, TrainingPlanOUTDTO& dto);

    void update(int id, const TrainingPlanINDTO& obj);
};

#endif
