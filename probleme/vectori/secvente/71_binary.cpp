#include <bits/stdc++.h>

using namespace std;
int binary_search(int st, int dr, long long v[], long long x)
{
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (v[mij] == x)
        {
            return mij;
        }
        if (v[mij] > x)
        {
            dr = mij - 1;
        }
        else
        {
            st = mij + 1;
        }
    }
    return -1;
}
int main()
{
    int t, n, m;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        cin >> n;
        long long v[n], s[n];
        s[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            s[i] = s[i - 1] + v[i];
        }

        cin >> m;
        long long u[m], su[m];
        su[0] = 0;

        for (int i = 1; i <= m; i++)
        {
            cin >> u[i];
            su[i] = su[i - 1] + u[i];
        }

        bool works = true;
        for (int i = 1; i <= m; i++)
        {
            if (binary_search(1, n, s, su[i]) == -1)
            {
                works = false;
            }
        }

        if (works)
            cout << 1 << endl;
        else
        {
            cout << 0 << endl;
        }
    }
}