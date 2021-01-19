#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0)
        n -= 1;

    while (n > 0)
    {
        std::cout << n << " ";
        n -= 2;
    }
}