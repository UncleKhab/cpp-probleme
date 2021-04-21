#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m)
{
    if (n < m)
    {
        swap(n, m);
    }
    if (m == 0)
    {
        return n;
    }
    else
    {
        return gcd(m, n % m);
    }
}

int main()
{
    int n;
    cin >> n;
    int v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int sum_deasupra = 0, sum_sub = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                sum_deasupra += v[i][j];
            if (i > j)
                sum_sub += v[i][j];
        }
    }
    cout << gcd(sum_deasupra, sum_sub) << endl;
}