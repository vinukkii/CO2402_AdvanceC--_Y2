#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class CFeedbackForum :
    public CCard
{
protected:
    string name1;
    string name2;
    int power;
   // int resilience;
    int boost;


public:
    string nameofCard();

    virtual int powerofCard();
    int resilienceofCard();
    int boostofCard();
    int power_incrementofCard();
    int mitigationofCard();

    int typeofCard();
    ECardTypes type4 = ECardTypes::Type4;

    CFeedbackForum(istream& file);
    friend istream& operator >> (istream& inputStream, CFeedbackForum& type4);

};

