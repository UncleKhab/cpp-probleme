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
    for (int i = 0; i < n; i++)
    {
        if (i != n - 2)
        {
            for (int j = 0; j < m; j++)
            {
                if (j != m - 2)
                {
                    cout << v[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
}
