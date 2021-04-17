#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    int tmp;
    bool exista = false;
    for (int j = 0; j < m; j++)
    {
        tmp = v[0][j];
        bool egale = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i][j] != tmp)
            {
                egale = false;
            }
        }
        if (egale)
        {
            exista = true;
            cout << tmp << " ";
        }
    }
    if (!exista)
    {
        cout << "nu exista";
    }
    cout << endl;
}
