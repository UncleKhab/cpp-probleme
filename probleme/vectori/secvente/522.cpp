#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int st = 0,
        dr = 0;
    bool gasit = false;
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i + 1; j <= n - k; j++)
        {
            if (v[i] == v[j])
            {
                gasit = true;
                int oi = i, oj = j;
                while (oi < k + i)
                {
                    if (v[oi] != v[oj])
                    {
                        gasit = false;
                        oi = k + i;
                    }
                    oi++;
                    oj++;
                }
            }
            if (gasit)
            {
                st = i;
                dr = j;
                break;
            }
        }
        if (gasit)
            break;
    }
    if (gasit)
    {
        cout << st + 1 << " " << dr + 1 << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}