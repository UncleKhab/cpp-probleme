#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n + 2][m + 2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int j = 0; j < m + 2; j++)
    {
        v[0][j] = 2;
    }
    for (int j = 0; j < m + 2; j++)
    {
        v[n + 1][j] = 2;
    }
    for (int j = 0; j < n + 2; j++)
    {
        v[j][0] = 2;
    }
    for (int j = 0; j < n + 2; j++)
    {
        v[j][m + 1] = 2;
    }
    int counter = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (v[i - 1][j] % 2 == 0 && v[i + 1][j] % 2 == 0 && v[i][j - 1] % 2 == 0 && v[i][j + 1] % 2 == 0)
                counter++;
        }
    }
    cout << counter << endl;
}
