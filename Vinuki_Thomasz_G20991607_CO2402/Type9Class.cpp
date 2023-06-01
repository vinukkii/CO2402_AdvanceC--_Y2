#include "Type9Class.h"

string Type9Class::nameofCard()
{
    return (name1 + " " + name2);
}

int Type9Class::powerofCard()
{
    return power;
}

int Type9Class::resilienceofCard()
{
    return resilience;
}

int Type9Class::boostofCard()
{
    return 0;
}

int Type9Class::power_incrementofCard()
{
    return power_increment;
}

int Type9Class::mitigationofCard()
{
    return 0;
}

int Type9Class::typeofCard()
{
    return static_cast<int>(type9);
}

Type9Class::Type9Class(istream& file) : CCard(file)
{
    file >> *this;
}

istream& operator>>(istream& inputStream, Type9Class& type9)
{
    inputStream >> type9.name1 >> type9.name2 >> type9.power >> type9.resilience >> type9.power_increment;
    return inputStream;
}
