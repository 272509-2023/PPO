//
// Created by 01szy on 16.04.2023.
//

#include <iostream>
#include <vector>
#include "tabelastudentow.h"
#include "student.h"


using namespace std;

Tstudent Ttabelastudentow::getStudent(int index)
{
    if(index<studenci.size() && index >=0)
    return studenci[index];

    for(int i=0;i<studenci.size();i++)
    {
        if(studenci[i].getindex()==index)
            return studenci[i];

    }
    return Tstudent();

}

Tstudent Ttabelastudentow::getStudent(string PESEL)
{
    for(int i=0;i<studenci.size();i++)
    {
        if(studenci[i].getPESEL()==PESEL)
            return studenci[i];

    }
    return Tstudent();
}