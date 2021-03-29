#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, st = 1, dr = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int smax = dr - st + 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (v[i] == v[j])
            {
                if (j - i + 1 > smax)
                {
                    st = i;
                    dr = j;
                    smax = dr - st + 1;
                }
            }
        }
    }
    cout << st + 1 << " " << dr + 1 << endl;
}