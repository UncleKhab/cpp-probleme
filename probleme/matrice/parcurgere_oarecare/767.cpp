#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, tmp;
    cin >> n >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            if (tmp % 2 == 0)
                sum += tmp;
        }

    cout << sum << endl;
}