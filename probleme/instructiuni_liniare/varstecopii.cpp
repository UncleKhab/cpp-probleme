#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << "Copiii au varste egale" << std::endl;
    else if (a < b)
        cout << "Al doilea copil este mai mare cu " << b - a << " ani" << std::endl;
    else
        cout << "Primul copil este mai mare cu " << a - b << " ani" << std::endl;
}