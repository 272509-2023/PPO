//
// Created by 01szy on 15.05.2023.
//
#include <iostream>
#include <vector>
#include <string>
#include "tabelauczelni.h"

 void tabelauczelni::dodajosobe(Tuczelnia) {

    osoba.push_back(Tuczelnia);

}

int tabelauczelni::getiloscosob() {
    return osoba.size();
}

int tabelauczelni::getiloscstudentow() {
    int iloscstudentow = 0;
    for (int i = 0; i < osoba.size(); i++)
    {
        if (osoba[i].getType() == "Student")
        {
            osoba++;
        }
    }
    return iloscstudentow;
}
}

int tabelauczelni::getiloscpracownikow() {
    int iloscpracownikow =0;
    for(int i=0;i<osoba.size();i++) {
        if (osoba[i].getType() == "Pracownik") {

            osoba++;
        }
    }
    return iloscpracownikow;
}

string tabelauczelni::getosobanazwisko() {
    return std::string();
}

string tabelauczelni::getosobaimie() {
    return std::string();
}

string tabelauczelni::getosobapesel() {
    return std::string();
}

void tabelauczelni::usunosobe(Tuczelnia tuczelnia) {

}
