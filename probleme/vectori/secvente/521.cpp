#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];
    int st = n, dr = n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool gasit = false;
    int m = n / k;
    for (int i = 0; i < n; i += m)
    {
        for (int j = i + m; j < n; j += m)
        {
            if (v[i] == v[j])
            {
                gasit = true;
                for (int l = 1; l < m; l++)
                {
                    if (v[i + l] != v[j + l])
                        gasit = false;
                }
            }
            if (gasit)
            {
                st = (i + 1) / m + 1;
                dr = (j + 1) / m + 1;
                break;
            }
        }
        if (gasit)
            break;
    }
    if (gasit)
    {
        cout << st << " " << dr << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}
