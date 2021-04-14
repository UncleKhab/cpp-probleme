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
    int counter = 0;
    bool diferite = true;
    for (int j = 0; j < m; j++)
    {
        diferite = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (v[i][j] == v[k][j])
                    diferite = false;
            }
        }
        if (diferite)
            counter++;
    }
    cout << counter << endl;
}
