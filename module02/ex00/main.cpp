#include "FixedPoint.hpp"

int main(void)
{
    FixedPoint a;
    FixedPoint b = a;
    b = a;

    b.getRawBits();

    FixedPoint c;
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
