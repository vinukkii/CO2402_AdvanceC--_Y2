#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class Type6Class :
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
    ECardTypes type6 = ECardTypes::Type6;

    Type6Class(istream& file);
    friend istream& operator >> (istream& inputStream, Type6Class& type6);
};

