#include "FixedPoint.hpp"
#include <cmath>

FixedPoint::FixedPoint(): fixedValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

// converting an integer to a fixed-point representation by shifting its bits to the left by 8 places.
FixedPoint::FixedPoint(int intValue)
{
    this->fixedValue = intValue << fractionBits;
    // std::cout << "INT Default constructor called" << std::endl;
}
// (<<) is not defined for floating-point types
FixedPoint::FixedPoint(float floatValue)
{
    this->fixedValue = roundf(floatValue * (1 << fractionBits));
    // std::cout << "FLOAT Default constructor called" << std::endl;
}


FixedPoint::FixedPoint(const FixedPoint &other)
{
    this->fixedValue = other.fixedValue;
    // std::cout << "Copy constructor called" << std::endl;
}

FixedPoint& FixedPoint::operator=(const FixedPoint &other)
{
    if (this != &other)
    {
        this->fixedValue = other.fixedValue;
    }
    // std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

FixedPoint::~FixedPoint()
{
    // std::cout << "Destructor called" << std::endl;
}

int FixedPoint::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedValue);
}

void FixedPoint::setRawBits( int const raw )
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedValue = raw;
}

float FixedPoint::toFloat(void) const
{
    // std::cout << "tofloat called" << std::endl;
    return (static_cast<float>(fixedValue) / (1 << fractionBits));
}

int FixedPoint::toInt(void) const
{
    // std::cout << "toint called" << std::endl;
    return (fixedValue >> fractionBits);
}

std::ostream& operator<<(std::ostream &out, const FixedPoint& other)
{
    out << other.toFloat();
    return (out);
}

bool FixedPoint::operator>(const FixedPoint &other) const
{
    return this->fixedValue > other.fixedValue;
}

bool FixedPoint::operator<(const FixedPoint &other) const
{
    return this->fixedValue < other.fixedValue;
}

bool FixedPoint::operator>=(const FixedPoint &other) const
{
    return this->fixedValue >= other.fixedValue;
}

bool FixedPoint::operator<=(const FixedPoint &other) const
{
    return this->fixedValue <= other.fixedValue;
}

bool FixedPoint::operator==(const FixedPoint &other) const
{
    return this->fixedValue == other.fixedValue;
}

bool FixedPoint::operator!=(const FixedPoint &other) const
{
    return this->fixedValue != other.fixedValue;
}

FixedPoint FixedPoint::operator+(const FixedPoint &other) const
{
    FixedPoint newFixed;
    newFixed.setRawBits(this->fixedValue + other.fixedValue);
    return (newFixed);
}

FixedPoint FixedPoint::operator-(const FixedPoint &other) const
{
    FixedPoint newFixed;
    newFixed.setRawBits(this->fixedValue - other.fixedValue);
    return (newFixed);
}

FixedPoint FixedPoint::operator*(const FixedPoint &other) const
{
    FixedPoint newFixed;
    int product = (this->fixedValue * other.fixedValue) >> fractionBits;
    newFixed.setRawBits(product);
    return (newFixed);
}

FixedPoint FixedPoint::operator/(const FixedPoint &other) const
{
    FixedPoint newFixed;
    int product = (this->fixedValue << fractionBits) / other.fixedValue;
    newFixed.setRawBits(product);
    return (newFixed);
}

FixedPoint &FixedPoint::operator++()
{
    this->fixedValue++;
    return (*this);
}

FixedPoint &FixedPoint::operator--()
{
    this->fixedValue--;
    return (*this);
}

FixedPoint FixedPoint::operator++(int)
{
    FixedPoint tmp = *this;
    this->fixedValue++;
    return (tmp);
}

FixedPoint FixedPoint::operator--(int)
{
    FixedPoint tmp = *this;
    this->fixedValue--;
    return (tmp);
}

FixedPoint &FixedPoint::min(FixedPoint& a, FixedPoint& b){
    return (a < b) ? a : b;
}

FixedPoint &FixedPoint::max(FixedPoint& a, FixedPoint& b){
    return (a > b) ? a : b;
}

const FixedPoint &FixedPoint::min(const FixedPoint& a, const FixedPoint& b){
    return (a < b) ? a : b;
}

const FixedPoint &FixedPoint::max(const FixedPoint& a, const FixedPoint& b){
    return (a > b) ? a : b;
}
