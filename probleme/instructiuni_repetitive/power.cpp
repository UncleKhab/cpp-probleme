#include <iostream>

int main()
{
    int a, b, p = 1;
    std::cin >> a >> b;
    while (b > 0)
    {
        p *= a;
        b--;
    }
    std::cout << p << std::endl;
}