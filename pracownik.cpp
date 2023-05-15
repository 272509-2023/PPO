//
// Created by 01szy on 16.04.2023.
//

#include "pracownik.h"
#include "uii.h"
#include "abstrakcja.h"
#include <iostream>

string Tpracownik::getstanowisko() {

    return stanowisko;
}
string Tpracownik::getnrkarty() {

    return nrkarty;
}
void Tpracownik::setstanowisko(string stanowisko) {

    this->stanowisko=stanowisko;
}
void Tpracownik::setnrkarty(int nrkarty) {

    this->nrkarty=nrkarty;
}
