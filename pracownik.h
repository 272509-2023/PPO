//
// Created by 01szy on 16.04.2023.
//

#ifndef LABOLATORIAPPO1_PRACOWNIK_H
#define LABOLATORIAPPO1_PRACOWNIK_H
#include "uii.h"

using namespace std;

class Tpracownik
        :public Tuczelnia
{
public:
    string getstanowisko();

    void setstanowisko(string stanowisko);

    int getnrkarty();

    void setnrkarty(int nrkarty);

private:
    string stanowisko;

    int nrkarty;
};

#endif //LABOLATORIAPPO1_PRACOWNIK_H
