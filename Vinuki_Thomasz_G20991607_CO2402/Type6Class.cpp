#include "Type6Class.h"

string Type6Class::nameofCard()
{
    return (name1 + " " + name2);
}

int Type6Class::powerofCard()
{
    return power;
}

int Type6Class::resilienceofCard()
{
    return resilience;
}

int Type6Class::boostofCard()
{
    return 0;
}

int Type6Class::power_incrementofCard()
{
    return power_increment;
}

int Type6Class::mitigationofCard()
{
    return 0;
}

int Type6Class::typeofCard()
{
    return static_cast<int>(type6);
}

Type6Class::Type6Class(istream& file) : CCard(file)
{
    file >> *this;
}

istream& operator>>(istream& inputStream, Type6Class& type6)
{
    inputStream >> type6.name1 >> type6.name2 >> type6.power >> type6.resilience >> type6.power_increment;
    return inputStream;
}
