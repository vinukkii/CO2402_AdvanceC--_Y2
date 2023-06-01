#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class CCourseAccreditation :
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
    ECardTypes type3 = ECardTypes::Type3;

    CCourseAccreditation(istream& file);
    friend istream& operator >> (istream& inputStream, CCourseAccreditation& type3);
};

