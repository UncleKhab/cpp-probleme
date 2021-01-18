#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power << std::endl;
}