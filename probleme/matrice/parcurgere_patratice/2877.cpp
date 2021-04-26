#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int p = j - 1;
            int x = v[i][j];
            while (x < v[i][p] && p >= 0)
            {
                v[i][p + 1] = v[i][p];
                p--;
            }
            v[i][p + 1] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int p = j - 1;
            int x = v[j][i];
            while (x < v[p][i] && p >= 0)
            {
                v[p + 1][i] = v[p][i];
                p--;
            }
            v[p + 1][i] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}