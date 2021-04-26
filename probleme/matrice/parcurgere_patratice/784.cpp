#include <bits/stdc++.h>
using namespace std;
int sum[101];
int sum_lin[101];
int main()
{
    int n;
    cin >> n;
    int v[n][n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            sum_lin[i] += v[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i] += v[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (sum[i] == sum_lin[j])
                cnt++;
        }
    }
    cout << cnt << endl;
}