//
// Created by 01szy on 16.04.2023.
//

#ifndef LABOLATORIAPPO1_TABELASTUDENTOW_H
#define LABOLATORIAPPO1_TABELASTUDENTOW_H
#include "uii.h"
#include "student.h"


class Ttabelastudentow {
    public:

    int addStudenci(Tstudent s);
    Tstudent getStudent(string PESEL);
    Tstudent getStudent(basic_string<char> index);

    private:
        vector<Tstudent> studenci;

};


#endif //LABOLATORIAPPO1_TABELASTUDENTOW_H
