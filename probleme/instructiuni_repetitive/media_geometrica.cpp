#include <iostream>
#include <cmath>
int main()
{
    int n, x;
    float o, p;
    std::cin >> n;
    p = 1;
    o = (float)1 / n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        p *= x;
    }
    p = pow(p, o);
    std::cout << p;
}