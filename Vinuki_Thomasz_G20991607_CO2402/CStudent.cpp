#include "CStudent.h"
#include"CCard.h"


string CStudent::nameofCard()
{
	return (name1 + " " + name2);
}

int CStudent::powerofCard()
{
	return power;
}

int CStudent::resilienceofCard()
{
	return resilience;
}

int CStudent::boostofCard()
{
	return 0;
}

int CStudent::power_incrementofCard()
{
	return 0;
}

int CStudent::mitigationofCard()
{
	return 0;
}

int CStudent::typeofCard()
{
	return static_cast<int>(type1);
}


CStudent::CStudent(istream& file) : CCard(file)
{
	file >> *this;
}


istream& operator>>(istream& inputStream, CStudent& type1)
{
	inputStream >> type1.name1 >> type1.name2 >> type1.power >> type1.resilience;
	return inputStream;
}


