#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class Type10Class :
    public CCard
{
protected:
    string name1;
    string name2;
    int power;
    int resilience;


public:
    string nameofCard();


    int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();

    int typeofCard();
    ECardTypes type10 = ECardTypes::Type10;

    Type10Class(istream& file);
    friend istream& operator >> (istream& inputStream, Type10Class& type10);

};

