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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (i == 0)
                {
                    sum += v[i][j + 1];
                }
                else if (i == n - 1)
                {
                    sum += v[i][j - 1];
                }
                else
                {
                    sum += v[i][j - 1] + v[i][j + 1];
                }
            }
        }
    }
    cout << sum << endl;
}