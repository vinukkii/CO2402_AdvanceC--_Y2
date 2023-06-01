#include "CCard.h"



CCard::CCard(istream& file) // constcutor 
{
	file >> *this;
}

string CCard::nameofCard()
{
	return string();
}
//
//int CCard::powerofCard()
//{
//	return 0;
//}

int CCard::resilienceofCard()
{
	return 0;
}

int CCard::boostofCrd()
{
	return 0;
}

int CCard::power_incrementofCard()
{
	return 0;
}

int CCard::mitigationofCard()
{
	return 0;
}






istream& operator>>(istream& inputStream, CCard& card)
{
	return inputStream;
}
