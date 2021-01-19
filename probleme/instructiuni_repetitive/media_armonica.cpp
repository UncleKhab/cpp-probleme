#include <iostream>
#include <iomanip>

int main()
{
    double n, m, p;
    p = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        p += 1 / m;
    }
    double r = n / p;
    r = (int)(r * 100) / 100.0;
    std::cout << std::fixed << std::setprecision(2) << r;
    return 0;
}