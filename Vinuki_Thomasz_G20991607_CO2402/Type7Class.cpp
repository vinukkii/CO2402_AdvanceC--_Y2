#include "Type7Class.h"

string Type7Class::nameofCard()
{
    return (name1 + " " + name2);
}

int Type7Class::powerofCard()
{
    return 0;
}

int Type7Class::resilienceofCard()
{
    return 0;
}

int Type7Class::boostofCard()
{
    return 0;
}

int Type7Class::power_incrementofCard()
{
    return power_increment;
}

int Type7Class::mitigationofCard()
{
    return 0;
}

int Type7Class::typeofCard()
{
    return static_cast<int>(type7);
}

Type7Class::Type7Class(istream& file) : CCard(file)
{
    file >> *this;
}

istream& operator>>(istream& inputStream, Type7Class& type7)
{
    inputStream >> type7.name1 >> type7.name2 >> type7.power_increment ;
    return inputStream;
}
