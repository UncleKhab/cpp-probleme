#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int m, n;
    if (a > b)
    {
        n = a;
        m = b;
    }
    else
    {
        n = b;
        m = a;
    }
    while (m != 0)
    {
        int r = n % m;
        n = m;
        m = r;
    }
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}