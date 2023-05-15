//
// Created by 01szy on 16.04.2023.
//
#include "uii.h"
#include "abstrakcja.h"
#ifndef LABOLATORIAPPO1_STUDENT_H
#define LABOLATORIAPPO1_STUDENT_H


class Tstudent
        : public Tuczelnia, public Tabstrakcja
{
public:
    string getindex();

    void setindex(int index);

protected:
    string index;
    string Type="student";
    string ID= index;

};


#endif //LABOLATORIAPPO1_STUDENT_H
