#pragma once
#include "CCard.h"
#include "ECardTypes.h"

class CStudent :
    public CCard
{

protected:
    string name1;
    string name2;
    int power;
    int resilience;


public:
      string nameofCard() ;
     virtual int powerofCard();
      int resilienceofCard();
      int boostofCard() ;
      int power_incrementofCard();
      int mitigationofCard();

      int typeofCard();
      ECardTypes type1 = ECardTypes::Type1;

    CStudent(istream& file);
    friend istream& operator >> (istream& inputStream, CStudent& type10);


};









