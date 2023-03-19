//
// Created by 01szy on 19.03.2023.
//

#include <string>
#include <vector>
#include <iostream>
#include "uii.h"
using namespace std;

void studindex(vector<stuentindeks> studenci) {
    int a;
    cout << "podaj liczbe studentow przyjetych na rok" << endl;
    cin >> a;
    do {

        stuentindeks stuentindeks;
        cout << "imie studenta" << endl;
        cin >> stuentindeks.studenciimie;
        cout << "nazwisko studenta" << endl;
        cin >> stuentindeks.studencinazwisko;
        cout << "index" << endl;
        cin >> stuentindeks.index;
        studenci.emplace_back(stuentindeks);

    } while (studenci.size() < a);

    for (int i = 0; i < studenci.size(); i++) {

        cout << studenci[i].studenciimie << " " << studenci[i].studencinazwisko << " ma indeks " << studenci[i].index << endl;

    }

}
