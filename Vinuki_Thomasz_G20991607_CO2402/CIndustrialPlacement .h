#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class Type5Class :
    public CCard
{
protected:
    string name1;
    string name2;
    int power;
    int resilience;
    int boost;


public:
    string nameofCard();


    int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();

    int typeofCard();
    ECardTypes type5 = ECardTypes::Type5;

    Type5Class(istream& file);
    friend istream& operator >> (istream& inputStream, Type5Class& type5);

};

