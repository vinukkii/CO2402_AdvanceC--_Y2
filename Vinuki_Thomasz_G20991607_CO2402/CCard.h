#pragma once
#include<iostream>
using namespace std;

class CCard
{
public:
	CCard(istream& file);

	// Function overloading polymophism 
	virtual string nameofCard() = 0;
	virtual int powerofCard() = 0;
	virtual int resilienceofCard();
	virtual int boostofCrd();
	virtual int power_incrementofCard();
	virtual int mitigationofCard(); 

	virtual int typeofCard() = 0; 




	friend istream& operator >> (istream& inputStream, CCard& card);

};

