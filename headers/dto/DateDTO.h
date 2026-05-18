#ifndef DATEDTO_H
#define DATEDTO_H

class DateDTO {

public:
    int day;
    int month;
    int year;

    DateDTO() = default;

    DateDTO(int day, int month, int year)
        : day(day), month(month), year(year) {
    }
};

#endif
