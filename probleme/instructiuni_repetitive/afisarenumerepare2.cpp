#include <iostream>

int main()
{
    int n, p;
    std::cin >> n;
    p = 2;
    while (p <= n)
    {
        std::cout << p << " ";
        p += 2;
    }
}