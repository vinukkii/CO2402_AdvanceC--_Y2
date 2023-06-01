#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class Type8Class :
    public CCard
{
protected:
    string name1;
    string name2;
    //int power_increment;
    int mitigation;


public:
    string nameofCard();


    int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();

    int typeofCard();
    ECardTypes type8 = ECardTypes::Type8;

    Type8Class(istream& file);
    friend istream& operator >> (istream& inputStream, Type8Class& type8);
};

