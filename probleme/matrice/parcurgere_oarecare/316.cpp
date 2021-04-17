#include <bits/stdc++.h>
using namespace std;
int a[21];
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    int min = 10001;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] < min)
            {
                min = v[i][j];
            }
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i][j] == min)
            {
                a[j]++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] > 0)
        {
            for (int j = 0; j < n; j++)
            {
                v[j][i] = min;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
