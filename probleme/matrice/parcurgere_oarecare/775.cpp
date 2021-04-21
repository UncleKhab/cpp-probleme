#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    int tmp[n][m];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        bool contine_nul = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i][j] == 0)
                contine_nul = true;
        }
        if (!contine_nul)
        {
            for (int i = 0; i < n; i++)
            {
                tmp[i][x] = v[i][j];
            }
            x++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << tmp[i][j] << " ";
        }
        cout << endl;
    }
}
