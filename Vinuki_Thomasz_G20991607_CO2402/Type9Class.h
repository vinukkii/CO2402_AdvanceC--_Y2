#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class Type9Class :
    public CCard
{
protected:
    string name1;
    string name2;
    int power;
    int resilience;
    int power_increment;


public:
    string nameofCard();


    int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();

    int typeofCard();
    ECardTypes type9 = ECardTypes::Type9;

    Type9Class(istream& file);
    friend istream& operator >> (istream& inputStream, Type9Class& type9);
};

