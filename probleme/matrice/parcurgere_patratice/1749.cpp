#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, z;
    cin >> n >> z;
    int v[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    int sum = 0;
    if (z == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j && i + j < n - 1)
                {
                    sum += v[i][j];
                }
            }
        }
    }
    if (z == 2)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j && i + j > n - 1)
                {
                    sum += v[i][j];
                }
            }
        }
    }
    if (z == 3)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > j && i + j > n - 1)
                {
                    sum += v[i][j];
                }
            }
        }
    }
    if (z == 4)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > j && i + j < n - 1)
                {
                    sum += v[i][j];
                }
            }
        }
    }
    cout << sum << endl;
}
