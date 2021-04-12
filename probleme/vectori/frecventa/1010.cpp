#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> p;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v, v + n);
    cin >> m;
    int tmp, nr = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> tmp;
        for (int j = 0; j < n; j++)
        {
            if (v[j] * tmp >= p)
            {
                break;
            }
            else
                nr++;
        }
    }
    cout << nr << endl;
}