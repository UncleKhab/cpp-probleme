#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> v[i][j];
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                if (i + j < n - 1)
                    a[0] += v[i][j];
                else if (i + j > n - 1)
                    a[1] += v[i][j];
            }
            else if (i > j)
                if (i + j > n - 1)
                    a[2] += v[i][j];
                else if (i + j < n - 1)
                    a[3] += v[i][j];
        }
    }
    sort(a, a + 4);
    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";
}