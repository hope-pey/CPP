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
        FixedPoint(const FixedPoint &other);
        FixedPoint& operator=(const FixedPoint &other);
        ~FixedPoint();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif