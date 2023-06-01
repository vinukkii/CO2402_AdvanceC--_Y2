#include "CIndustrialPlacement .h"

string Type5Class::nameofCard()
{
    return (name1 + " " + name2);
}

int Type5Class::powerofCard()
{
    return power;
}

int Type5Class::resilienceofCard()
{
    return resilience;
}

int Type5Class::boostofCard()
{
    return boost;
}

int Type5Class::power_incrementofCard()
{
    return 0;
}

int Type5Class::mitigationofCard()
{
    return 0;
}

int Type5Class::typeofCard()
{
    return static_cast<int>(type5);
}

Type5Class::Type5Class(istream& file) : CCard(file)
{
    file >> *this;
}

istream& operator>>(istream& inputStream, Type5Class& type5)
{
    inputStream >> type5.name1 >> type5.name2 >> type5.power >> type5.resilience >> type5.boost;
    return inputStream;
}
