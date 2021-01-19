#include <iostream>

using namespace std;

int main()
{
    int x1, x2, dif, n, s;
    cin >> x1 >> x2;
    dif = abs(x1 - x2);
    if (dif % 2 != 0)
    {
        n = dif / 2 + 1;
        s = (n * (n + 1)) - n;
    }
    else
    {
        n = dif / 2;
        s = (n * (n + 1));
    }

    cout << s << endl;
}