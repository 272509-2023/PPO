//
// Created by 01szy on 19.03.2023.
//

#include <string>
#include <vector>
#include <iostream>
#include "uii.h"
using namespace std;

string Tuczelnia::getimie(){

    return imie;
};
string Tuczelnia::getnazwisko(){

    return nazwisko;
};
string Tuczelnia::getPESEL(){

    return PESEL;
};
void Tuczelnia::setimie(string imie){

    this-> imie=imie;
};
void Tuczelnia::setnazwisko(string nazwisko){

    this-> nazwisko=nazwisko;
};
int Tuczelnia::setPESEL(string PESEL) {
    if (sizeof(PESEL) == 11) {

        this->PESEL = PESEL;

        return 0; /* PESEL poprawny */
    } else {

        return 1; /*pesel bledny*/
    }
}


