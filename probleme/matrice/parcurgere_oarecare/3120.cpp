#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n][m], mij_m = m / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    bool sim = true;
    for (int i = 0; i < n && sim == true; i++)
    {
        for (int j = 0; j < mij_m; j++)
        {
            if (v[i][j] != v[i][m - j - 1])
                sim = false;
        }
    }
    if (sim)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}
