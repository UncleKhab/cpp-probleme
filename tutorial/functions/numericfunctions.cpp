#include <iostream>
#include <cmath>

int main()
{
    std::cout << sqrt(-25) << std::endl;
    // Special values, nan - not a number
    std::cout << pow(-9, 9999) << std::endl;
    // infinity or -infinity

    // remained math functions
    std::cout << remainder(10, 3) << std::endl;
    // it works similar like modulus %
    // usually used when you need it to return a floating point value

    // max / min
    std::cout << fmax(10, 3) << std::endl;

    // round() ceil() floor() trunc()
}