#include <iostream>

int main()
{
    int a, b, n;
    std::cin >> a >> b >> n;
    if (a > n || n > b)
        std::cout << "NU";
    else
        std::cout << "DA" << std::endl;
    return 0;
}