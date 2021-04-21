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
    int sum_principala = 0, sum_secundara = 0;
    for (int i = 0; i < n; i++)
    {
        sum_principala += v[i][i];
        sum_secundara += v[i][n - i - 1];
    }
    cout << abs(sum_principala - sum_secundara) << endl;
}
