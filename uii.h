//
// Created by 01szy on 19.03.2023.
//

#ifndef LABOLATORIAPPO1_UII_H
#define LABOLATORIAPPO1_UII_H

#include "abstrakcja.h"
#include <iostream>
#include <string>
using namespace std;

class Tuczelnia: {
    public:
    string getimie();
    string getnazwisko();
    string getPESEL();
    void setimie(string imie);
    void setnazwisko(string nazwisko);
    void setPESEL(string PESEL);

    protected:
        string PESEL;
        string imie;
        string nazwisko;


};




#endif //LABOLATORIAPPO1_UII_H

//laby 2
//1.przerabiamy strukture na klase, dane ze struktury mają byc jako private i dodajemy dana pesel(string) jako dane private
// 2.dopisujemy metody do danych prywatnych (metody musza byc publiczne) tak zwane getery i setery (get... i set...)
//  3.W metodzie setPESEL sprawdzamy czy pesel jest poprawny, dodajemy kody bledu
//   4. Nastepnie dodajemy funkcje sprawdzajaca wiek na podstawie peselu oraz przy pomocy /* */ dodajemy komentarze do kodu
//    5. tworzymy nowa klase ktora przechowuje dane o wszystkich studentach w tablicy { mamy ja zaprojektowac }
//     6. Do domu: skonczyc projekt

//laby 3
//1.dodać do klasy dane dla pracownika i rozbić je na dwie pod klasy pracownik i student (dane pracownika: imie, nazwisko, PESEL, stanowisko, numer karty pracownika) najpierw zaprojektować potem zaprogramować
//2.Wprowadzić zmiany dla klasy przechowującej i dla interfejsu
//3.Do domu skończyć wprowadzanie zmian

//string getstudenciimie(){

//    return studenciimie;
//};
//string getstudencinazwisko(){

 //   return studencinazwisko;
//};
//string getPESEL(){

//  return PESEL;
//};
//int getindex(){

//   return index;
//};

//nastepnie korzystajac z geterów i seterów tworzymy funkcje, która ma wypisac wszystkie dane w dwówymiarowej tablicy(można skorzystac z wektorów)