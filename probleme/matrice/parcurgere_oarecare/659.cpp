#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, tmp, max = 0, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            sum += tmp;
            if (tmp > max)
            {
                max = tmp;
            }
        }
        cout << sum - max << " ";
        sum = max = 0;
    }
}