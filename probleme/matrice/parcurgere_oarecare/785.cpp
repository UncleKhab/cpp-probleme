#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long int v[n][m];
    int ns = n - 2, ms = m - 2;

    long int min = 1000001, imin, jmin;
    long int max = -1000001, imax, jmax;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] <= min)
            {
                min = v[i][j];
                imin = i;
                jmin = j;
            }
            if (v[i][j] >= max)
            {
                max = v[i][j];
                imax = i;
                jmax = j;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int ok = 0;
        for (int j = 0; j < m; j++)
        {
            if (i != imin && i != imax && j != jmin && j != jmax)
            {
                cout << v[i][j] << " ";
                ok = 1;
            }
        }
        if (ok)
        {
            cout << endl;
        }
    }
}
