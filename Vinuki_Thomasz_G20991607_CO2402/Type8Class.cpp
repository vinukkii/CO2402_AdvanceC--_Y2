#include "Type8Class.h"

string Type8Class::nameofCard()
{
    return (name1 + " " + name2);
}

int Type8Class::powerofCard()
{
    return 0;
}

int Type8Class::resilienceofCard()
{
    return 0;
}

int Type8Class::boostofCard()
{
    return 0;
}

int Type8Class::power_incrementofCard()
{
    return 0;
}

int Type8Class::mitigationofCard()
{
    return mitigation;
}

int Type8Class::typeofCard()
{
    return static_cast<int>(type8);
}

Type8Class::Type8Class(istream& file) : CCard(file)
{
    file >> *this;
}

istream& operator>>(istream& inputStream, Type8Class& type8)
{
    inputStream >> type8.name1 >> type8.name2 >> type8.mitigation;
    return inputStream;
}
