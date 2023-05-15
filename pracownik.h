//
// Created by 01szy on 16.04.2023.
//

#ifndef LABOLATORIAPPO1_PRACOWNIK_H
#define LABOLATORIAPPO1_PRACOWNIK_H
#include "uii.h"
#include "abstrakcja.h"

using namespace std;

class Tpracownik
        :public Tuczelnia, public Tabstrakcja
{
public:
    string getstanowisko();

    void setstanowisko(string stanowisko);

    string getnrkarty();

    void setnrkarty(int nrkarty);

protected:
    string stanowisko;
    string Type="pracownik";
    string nrkarty;
    string ID=nrkarty;
};

#endif //LABOLATORIAPPO1_PRACOWNIK_H
/*{
        return stanowisko;

    }

{
        this-> stanowisko=stanowisko;

    }

{
        return nrkarty;

    }

{
        this->nrkarty=nrkarty;

    }

 */

//1.stworzyć klasę interfejs z zadeklarowanymi metodami getID i getType
//2. stworzyć klasę abstrakcyjną
//3. wprowadzenie zmian w