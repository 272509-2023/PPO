//
// Created by 01szy on 19.03.2023.
//

#ifndef LABOLATORIAPPO1_UII_H
#define LABOLATORIAPPO1_UII_H


#include <iostream>
#include <string>
using namespace std;

class Tstuentindeks {
    public:
        string getstudenciimie(){

            return studenciimie;
        };
        string getstudencinazwisko(){

            return studencinazwisko;
        };
        string getPESEL(){

            return PESEL;
        };
        int getindex(){

            return index;
        };
        void setstudenciimie(string studenciimie){

            this-> studenciimie=studenciimie;
        };
        void setstudencinazwisko(string studencinazwisko){

            this-> studencinazwisko=studencinazwisko;
        };
        void setindex(int index){

            this-> index=index;
        }; /*    */
        int setPESEL(string PESEL){
            if(sizeof(PESEL) == 11){

                this->PESEL=PESEL;

                return 0; /* PESEL poprawny */
            }
            else{

                return 1; /*pesel bledny*/
            }

        };
    private:
        string PESEL;
        string studenciimie;
        string studencinazwisko;
        int index;
};




#endif //LABOLATORIAPPO1_UII_H


//1.przerabiamy strukture na klase, dane ze struktury mają byc jako private i dodajemy dana pesel(string) jako dane private
// 2.dopisujemy metody do danych prywatnych (metody musza byc publiczne) tak zwane getery i setery (get... i set...)
//  3.W metodzie setPESEL sprawdzamy czy pesel jest poprawny, dodajemy kody bledu
//   4. Nastepnie dodajemy funkcje sprawdzajaca wiek na podstawie peselu oraz przy pomocy /* */ dodajemy komentarze do kodu
//    5. tworzymy nowa klase ktora przechowuje dane o wszystkich studentach w tablicy { mamy ja zaprojektowac }
//     6. Do domu: skonczyc projekt




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