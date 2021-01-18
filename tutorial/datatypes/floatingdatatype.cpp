#include <iostream>
#include <float.h>
// to check how many digits the datatype is thrustworthy to
// FLT_DIG DBL_DIG LDBL_DIG
using std::cout;

int main()
{
    float a = 10.0 / 3;
    a = a * 1000000000000;
    double b = 77000; // 7.7E4 (7.7 x 10^4)
    long double c;

    cout << std::fixed << a;

    // When working with floaitng points , you have 2 sections
    // a number like 7.7 and a multiplier like 10000
    // 7.7 * 10000 = 77000
    // You can store much larger numbers with limited memory

    // Floats are not thrustworthy
}