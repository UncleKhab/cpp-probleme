#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p = 0;
    cin >> n;
    int v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int m = 0; m <= 2 * n; m++)
    {
        if (m >= n)
            p++;
        if (m % 2 == 0)
            for (int i = p; i <= m - p; i++)
                cout << v[i][m - i] << " ";
        else
            for (int i = m - p; i >= p; i--)
                cout << v[i][m - i] << " ";
    }
}