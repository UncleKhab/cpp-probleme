#include <iostream>
using namespace std;

int main()
{
    // It can be used to store characters or store numbers
    char x = 65; // You need to use single quotes, double quotes are reserved for strings
    /* Char can store values of up to 127(included)
       Anything above that will wrap around to the lowest possible value to store(-128)
    */
    unsigned char y = 129; // This stores up to 255;
    cout << y << std::endl;
}