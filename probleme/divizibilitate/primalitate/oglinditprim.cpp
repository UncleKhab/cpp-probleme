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
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int oglindit(int n)
{
    int m = 0;
    while (n)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int main()
{
    long long int n, m, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        long long int x = oglindit(m);
        if (prim(x))
            counter += m;
    }
    cout << counter << endl;
}