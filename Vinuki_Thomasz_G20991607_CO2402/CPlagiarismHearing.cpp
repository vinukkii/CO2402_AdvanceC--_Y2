#include "CPlagiarismHearing.h"

string CPlagiarismHearing::nameofCard()
{
    return (name1 + " " + name2);
}

int CPlagiarismHearing::powerofCard()
{
    return power;
}

int CPlagiarismHearing::resilienceofCard()
{
    return 0;
}

int CPlagiarismHearing::boostofCard()
{
    return 0;
}

int CPlagiarismHearing::power_incrementofCard()
{
    return 0;
}

int CPlagiarismHearing::mitigationofCard()
{
    return 0;
}

int CPlagiarismHearing::typeofCard()
{
    return static_cast<int>(type2);;
}

//int Type2Class::powerofCard()
//{
//    return power;
//}


CPlagiarismHearing::CPlagiarismHearing(istream& file) : CCard(file)
{
    file >> *this;
}



istream& operator>>(istream& inputStream, CPlagiarismHearing& type2)
{
    inputStream >> type2.name1 >> type2.name2 >> type2.power;
    return inputStream;
}
