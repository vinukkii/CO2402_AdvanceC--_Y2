#include "CFeedbackForum.h"

string CFeedbackForum::nameofCard()
{
	return (name1 + " " + name2);
}

int CFeedbackForum::powerofCard()
{
	return power;
}

int CFeedbackForum::resilienceofCard()
{
	return 0;
}

int CFeedbackForum::boostofCard()
{
	return boost;
}

int CFeedbackForum::power_incrementofCard()
{
	return 0;
}

int CFeedbackForum::mitigationofCard()
{
	return 0;
}

int CFeedbackForum::typeofCard()
{
	return static_cast<int>(type4);
}

CFeedbackForum::CFeedbackForum(istream& file) : CCard(file)
{
	file >> *this;
}


istream& operator>>(istream& inputStream, CFeedbackForum& type4)
{
	inputStream >> type4.name1 >> type4.name2 >> type4.power  >> type4.boost;
	return inputStream;
}
