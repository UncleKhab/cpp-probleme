#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double n, m, p = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        p += (m * m);
    }
    p /= n;
    p = sqrt(p);
    std::cout << std::fixed << std::setprecision(2) << p;
}