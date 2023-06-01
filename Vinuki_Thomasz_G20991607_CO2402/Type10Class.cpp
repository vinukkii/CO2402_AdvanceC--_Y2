#include "Type10Class.h"

string Type10Class::nameofCard()
{
	return (name1 + " " + name2);
}

int Type10Class::powerofCard()
{
	return power;
}

int Type10Class::resilienceofCard()
{
	return resilience;
}

int Type10Class::boostofCard()
{
	return 0;
}

int Type10Class::power_incrementofCard()
{
	return 0;
}

int Type10Class::mitigationofCard()
{
	return 0;
}

int Type10Class::typeofCard()
{
	return static_cast<int>(type10);
}

Type10Class::Type10Class(istream& file) : CCard(file)
{
	file >> *this;
}

istream& operator>>(istream& inputStream, Type10Class& type10)
{
	inputStream >> type10.name1 >> type10.name2 >> type10.power >> type10.resilience;
	return inputStream;
}
