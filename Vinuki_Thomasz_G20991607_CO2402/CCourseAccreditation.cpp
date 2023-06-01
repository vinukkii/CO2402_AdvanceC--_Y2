#include "CCourseAccreditation.h"

string CCourseAccreditation::nameofCard()
{
    return (name1 + " " + name2);
}

int CCourseAccreditation::powerofCard()
{
    return power;
}

int CCourseAccreditation::resilienceofCard()
{
    return 0;
}

int CCourseAccreditation::boostofCard()
{
    return 0;
}

int CCourseAccreditation::power_incrementofCard()
{
    return 0;
}

int CCourseAccreditation::mitigationofCard()
{
    return 0;
}

int CCourseAccreditation::typeofCard()
{
    return static_cast<int>(type3);
}



CCourseAccreditation::CCourseAccreditation(istream& file) : CCard(file)
{
    file >> *this;
}

istream& operator>>(istream& inputStream, CCourseAccreditation& type3)
{
    inputStream >> type3.name1 >> type3.name2 >> type3.power;
    return inputStream;
}

