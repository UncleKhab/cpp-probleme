#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sum = 0, tmp;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << " ";
        sum = 0;
    }
}