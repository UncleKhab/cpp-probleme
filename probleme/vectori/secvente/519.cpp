#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> x;
    int u[x];
    for (int i = 0; i < x; i++)
    {
        cin >> u[i];
    }
    bool gasit = false;
    int poz = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == u[0])
        {
            poz = i + 1;
            gasit = true;
            int j = i + 1;
            int k = 1;
            while (k < x)
            {
                if (v[j] != u[k])
                    gasit = false;
                k++;
                j++;
            }
        }
        if (gasit)
        {
            break;
        }
    }
    if (gasit)
    {
        cout << poz << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}