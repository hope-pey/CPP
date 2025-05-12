#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP
/*
    Default constructor
    Copy constructor
    Copy assignment operator
    Destructor
*/

#include <iostream>

class FixedPoint
{
    private:
        int fixedValue;
        static const int fractionBits = 8;
    public:
        FixedPoint();
        FixedPoint(const int intValue);
        FixedPoint(const float floatValue);

        FixedPoint(const FixedPoint &other);
        FixedPoint& operator=(const FixedPoint &other);
        ~FixedPoint();
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const FixedPoint& other);


#endif