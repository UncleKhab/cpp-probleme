#include <bits/stdc++.h>
using namespace std;
int v[22][22];
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x = v[i][j];
            if (x > v[i][j - 1] && x > v[i][j + 1] && x > v[i + 1][j] && x > v[i - 1][j])
                cnt++;
        }
    }
    cout << cnt << endl;
}