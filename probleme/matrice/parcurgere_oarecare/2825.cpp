#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    cin >> x;
    bool exista = false;
    for (int j = 0; j < m; j++)
    {
        if (v[0][j] == x)
            exista = true;
    }
    for (int j = 0; j < m; j++)
    {
        if (v[n - 1][j] == x)
            exista = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] == x)
            exista = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i][m - 1] == x)
            exista = true;
    }
    if (exista)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}
