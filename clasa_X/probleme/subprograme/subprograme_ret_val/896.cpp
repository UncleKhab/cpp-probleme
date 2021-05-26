#include <iostream>

using namespace std;

int main()
{
}
int fact(int x)
{
    int r = 1;
    for (int i = 1; i <= x; i++)
    {
        r *= i;
    }
    return r;
}