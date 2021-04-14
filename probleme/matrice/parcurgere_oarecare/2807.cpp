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
    int prima_min = 10001, prima_min_index;
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] < prima_min)
        {
            prima_min = v[i][0];
            prima_min_index = i;
        }
    }
    int ultima_min = 10001, ultima_min_index;

    for (int i = 0; i < n; i++)
    {
        if (v[i][m - 1] < ultima_min)
        {
            ultima_min = v[i][m - 1];
            ultima_min_index = i;
        }
    }
    v[prima_min_index][0] = ultima_min;
    v[ultima_min_index][m - 1] = prima_min;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}
