#include <iostream>

int main()
{
    int n, m, p = 0;
    std::cin >> n >> m;
    while (m > 1)
    {
        p++;
        m /= n;
    }
    std::cout << p << std::endl;
}