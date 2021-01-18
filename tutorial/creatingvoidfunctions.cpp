#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double, int); //declaration

void print_pow(double base, int exponent) // declaring and defining
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << ".\n";
}
int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    print_pow(base, exponent);
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