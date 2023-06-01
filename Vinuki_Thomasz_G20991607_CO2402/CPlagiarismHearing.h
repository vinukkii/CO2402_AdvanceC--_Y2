#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class CPlagiarismHearing :
    public CCard
{
protected:
    string name1;
    string name2;
    int power;

public:
    string nameofCard();

    int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();
   
    int typeofCard();
    ECardTypes type2 = ECardTypes::Type2;

    CPlagiarismHearing(istream& file);
    friend istream& operator >> (istream& inputStream, CPlagiarismHearing& type2);

};

