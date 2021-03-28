#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    int u[x];
    for (int i = 0; i < x; i++)
    {
        cin >> u[i];
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        bool gasit = false;

        if (v[i] == u[0])
        {
            int k = 1;
            int l = i + 1;
            gasit = true;
            while (k < x)
            {
                if (v[l] != u[k])
                    gasit = false;
                k++, l++;
            }
        }
        if (gasit)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}