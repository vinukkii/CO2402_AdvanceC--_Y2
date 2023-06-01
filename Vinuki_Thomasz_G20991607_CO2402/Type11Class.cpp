#include "Type11Class.h"

string Type11Class::nameofCard()
{
	return (name1 + " " + name2);
}

int Type11Class::powerofCard()
{
	return power;
}

int Type11Class::resilienceofCard()
{
	return resilience;
}

int Type11Class::boostofCard()
{
	return boost;
}

int Type11Class::power_incrementofCard()
{
	return 0;
}

int Type11Class::mitigationofCard()
{
	return 0;
}

int Type11Class::typeofCard()
{
	return static_cast<int>(type11);
}

Type11Class::Type11Class(istream& file) : CCard(file)
{
	file >> *this;
}


istream& operator>>(istream& inputStream, Type11Class& type11)
{
	inputStream >> type11.name1 >> type11.name2 >> type11.power >> type11.resilience >> type11.boost;
	return inputStream;
}
