#include "FixedPoint.hpp"

int main( void ) {
    FixedPoint a;
    FixedPoint const b( FixedPoint( 5.05f ) * FixedPoint( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << FixedPoint::max( a, b ) << std::endl;
return 0;
}
