#include <iostream>

using namespace std;

int prim(int n)
{
    if (n == 0 || n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, m, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (prim(m))
        {
            while (m)
            {
                sum += m % 10;
                m /= 10;
            }
        }
    }
    cout << sum << endl;
}