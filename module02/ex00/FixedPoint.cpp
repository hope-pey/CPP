#include "FixedPoint.hpp"
// Copy the value of the fixedValue from the other object
/*
Copy Constructor:
    Purpose: Creates a new FixedPoint object by initializing it as a copy of other.
    Context: Called when a new object is being constructed.
    FixedPoint a;
    FixedPoint b = a; // Copy constructor
    FixedPoint c(a);  // Copy constructor
Copy Assignment Operator:
    Purpose: Modifies an existing FixedPoint object by copying the values of other into it.
    Context: Called when an existing object is assigned a new value using =.
    FixedPoint a, b;
    b = a; // Copy assignment operator
*/

FixedPoint::FixedPoint(): fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint &other)
{
    this->fixedValue = other.fixedValue;
    std::cout << "Copy constructor called" << std::endl;
}

FixedPoint& FixedPoint::operator=(const FixedPoint &other)
{
    if (this != &other)
    {
        this->fixedValue = other.fixedValue;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

FixedPoint::~FixedPoint()
{
    std::cout << "Destructor called" << std::endl;
}

int FixedPoint::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedValue);
}

void FixedPoint::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedValue = raw;
}
