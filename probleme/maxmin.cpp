#include <iostream>

using namespace std;

int main()
{
    long a, b, c, min, max;
    cin >> a >> b >> c;
    min = 1000000001;
    max = 0;
    if (a > max)
        max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    if (a < min)
        min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    cout << max - min << endl;
}