#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n][m], aux[n][m];
    int x = 0;
    int min = 1000000;
    int indx;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    bool ordonat = false;
    while (!ordonat)
    {
        min = 1000000;
        ordonat = true;
        for (int i = 0; i < m; i++)
        {
            if (v[0][i] < min && v[0][i] > 0)
            {
                ordonat = false;
                min = v[0][i];
                indx = i;
            }
        }
        if (!ordonat)
        {
            for (int j = 0; j < n; j++)
            {
                aux[j][x] = v[j][indx];
            }
            x++;
            v[0][indx] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << aux[i][j] << " ";
        }
        cout << endl;
    }
}
