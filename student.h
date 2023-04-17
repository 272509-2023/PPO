//
// Created by 01szy on 16.04.2023.
//
#include "uii.h"
#include <vector>
#ifndef LABOLATORIAPPO1_STUDENT_H
#define LABOLATORIAPPO1_STUDENT_H


class Tstudent
        : public Tuczelnia
{
public:
    int getindex();

    void setindex(int index);

private:
    int index;

};


#endif //LABOLATORIAPPO1_STUDENT_H
