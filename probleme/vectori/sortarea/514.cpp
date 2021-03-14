#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (n < m)
        swap(n, m);
    if (m == 0)
        return n;
    else
        return gcd(m, n % m);
}

int main()
{
    int n;
    cin >> n;
    int v[n], u[n], c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ult_elem = v[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        if (gcd(v[i], ult_elem) == 1)
        {
            u[c] = v[i];
            c++;
        }
    }
    for (int i = 1; i < c; i++)
    {
        int x = u[i];
        int p = i - 1;
        while (x > u[p] && p >= 0)
        {
            u[p + 1] = u[p];
            p--;
        }
        u[p + 1] = x;
    }
    for (int i = 0; i < c; i++)
    {
        cout << u[i] << " ";
    }
}