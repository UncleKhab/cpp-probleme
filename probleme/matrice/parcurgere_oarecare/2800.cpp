#include <bits/stdc++.h>
using namespace std;
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
    int ult = v[n - 1][m - 1];

    for (int i = 0; i < n; i++)
    {
        v[i][0] = ult;
    }
    for (int i = 0; i < n; i++)
    {
        v[i][m - 1] = ult;
    }
    for (int j = 1; j < m - 1; j++)
    {
        v[0][j] = ult;
    }
    for (int j = 1; j < m - 1; j++)
    {
        v[n - 1][j] = ult;
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
