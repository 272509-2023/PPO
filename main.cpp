#include <string>
#include <vector>
#include <iostream>
#include "uii.h"
#include "student.h"
#include "tabelastudentow.h"
#include "pracownik.h"
using namespace std;

Ttabelastudentow studenci;

int main()
{
    int wybor;

    while(4 != wybor)
    {
        cout<<"Witaj"<<endl;
        cout<<" "<<endl;
        cout<<"wybierz jedna z opcji"<<endl;
        cout<<"1.dodaj studenta"<<endl;
        cout<<"2.otrzymaj studenta "<<endl;
        cout<<"3.wyjdź"<<endl;
        cin>>wybor;
        switch(wybor)
        {
            case 1:
            {
                Tuczelnia a;
                Tstudent s;
                cout<<"Nazwisko: "<<endl;
                cout<<"Imie: "<<endl;
                cout<<"Pesel: "<<endl;
                cout<<"Index: "<<endl;
                string nazwisko;
                string imie;
                string PESEL;
                int index;
                cin>>nazwisko;
                a.setnazwisko(nazwisko);
                cin>>imie;
                a.setimie(imie);
                cin>>PESEL;
                a.setPESEL(PESEL);
                cin>>index;
                s.setindex(index);

                break;
            }
            case 2:
            {
                cout<< "1. otrzymaj studenta po index"<<endl;
                cout<< "2. otrzymaj studenta po peselu"<<endl;
                int stud;
                cin>> stud;
                if(stud=1)
                {


                }else if(stud=2)
                {


                }else
                {
                    cout<<"bład"<<endl;

                }

                break;
            }

        }
    }
    return 0;
}