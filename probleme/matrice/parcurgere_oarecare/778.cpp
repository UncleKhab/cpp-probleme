#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int tmp = v[i][0];
        a[tmp]++;
    }
    for (int i = 0; i < n; i++)
    {
        int tmp = v[i][m - 1];
        a[tmp]++;
    }
    for (int i = 1; i < m - 1; i++)
    {
        int tmp = v[0][i];
        a[tmp]++;
    }
    for (int i = 1; i < m - 1; i++)
    {
        int tmp = v[n - 1][i];
        a[tmp]++;
    }
    for (int i = 0; i < 1000000; i++)
        if (a[i] > 0)
            cout << i << " ";
}
