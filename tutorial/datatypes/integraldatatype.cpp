#include <iostream>
#include <climits>

using std::cout;

int main()
{
    short a;     //
    int b;       // at least 16 bits
    long c;      // at least 32 bits
    long long d; // at least 64 bits
    //short <= int <= long <= long long

    // Only allow positive values
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << USHRT_MAX << std::endl;
    cout << LONG_MAX << std::endl;
    cout << sizeof(long);
}