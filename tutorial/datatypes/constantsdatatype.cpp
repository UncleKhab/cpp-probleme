#include <iostream>
using std::cout;

#define X 10 // old way of declaring a const

int main()
{
    const int x = 5; // prefixing
    // symbolic constants
    // They create a read only variable, you can assign first, but then you can't

    // We can create a constant and use it without worrying the value will change
    const int setting = 3;
    // If you dont asign when declaring, you can't change it anymore;

    // enum constants
    enum
    {
        y = 100
    };
}