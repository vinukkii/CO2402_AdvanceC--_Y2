#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class Type7Class :
    public CCard
{
protected:
    string name1;
    string name2;
    int power_increment;
    //int mitigation;


public:
    string nameofCard();


    int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();

    int typeofCard();
    ECardTypes type7 = ECardTypes::Type7;

    Type7Class(istream& file);
    friend istream& operator >> (istream& inputStream, Type7Class& type7);
};

