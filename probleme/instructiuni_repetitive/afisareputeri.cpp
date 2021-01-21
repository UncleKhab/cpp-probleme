#include <iostream>

int main()
{
    int n, p, x;
    std::cin >> n >> p;
    x = n;
    std::cout << 1 << " ";
    while (n <= p)
    {
        std::cout << n << " ";
        n *= x;
    }
}