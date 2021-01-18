#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, s, min;
    cin >> a >> b >> c >> d >> e;
    s = a + b + c + d + e;
    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = e;
    s -= min;
    if (a == min)
        a = 1000001;
    if (b == min)
        b = 1000001;
    if (c == min)
        c = 1000001;
    if (d == min)
        d = 1000001;
    if (e == min)
        e = 1000001;

    min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    if (e < min)
        min = e;
    s -= min;
    cout << s << endl;
}