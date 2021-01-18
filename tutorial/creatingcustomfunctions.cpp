#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double, int); //declaration

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double myPower = power(base, exponent);
    cout << myPower << std::endl;
}

double power(double base, int exponent) //definition
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}