#include "Weapon.hpp"

/*
    Access the value of type
    Avoid copying the string (thanks to the reference)
    Prevent modification (thanks to const)
    Use it in const objects (thanks to const at the end)
*/
const std::string& Weapon::getType() const
{
    return (type);
}

/*
    No copy is made
    Just a reference to the original string (very fast)
    Marked const so it cannot be modified inside the function
*/
void Weapon::setType(const std::string &newType)
{
    type = newType;
}