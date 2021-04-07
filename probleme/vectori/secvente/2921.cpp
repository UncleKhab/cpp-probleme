#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    long long int v[n];
    long long int sum[n], max = -999999999999999999;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + v[i];
    }
    cin >> m;
    int j, k;
    for (int i = 0; i < m; i++)
    {
        cin >> j >> k;
        int dr = std::max(k, j);
        int st = std::min(j, k);
        if (sum[dr] - sum[st - 1] > max)
        {
            max = sum[dr] - sum[st - 1];
        }
    }
    cout << max << endl;
}
