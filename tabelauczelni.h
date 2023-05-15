//
// Created by 01szy on 15.05.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include "student.h"
#include "pracownik.h"
#include "uii.h"
#include "abstrakcja.h"
#ifndef LABOLATORIAPPO1_TABELAUCZELNI_H
#define LABOLATORIAPPO1_TABELAUCZELNI_H


class tabelauczelni {
private:
    vector<Tuczelnia>osoba;
public:
    void dodajosobe(Tuczelnia tuczelnia);

    int getiloscosob();

    int getiloscstudentow();

    int getiloscpracownikow();

    string getosobanazwisko();

    string getosobaimie();

    string getosobapesel();

    void usunosobe(Tuczelnia tuczelnia);

};


#endif //LABOLATORIAPPO1_TABELAUCZELNI_H
