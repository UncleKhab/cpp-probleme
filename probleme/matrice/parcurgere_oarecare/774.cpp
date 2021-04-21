#include <bits/stdc++.h>

using namespace std;
bool a[1000005];
void get_prime()
{
    a[0] = true;
    a[1] = true;
    for (int i = 2; i <= 1000; i++)
    {
        if (!a[i])
        {
            int max = 1000000 / i;
            for (int j = 2; j <= max; j++)
                a[i * j] = true;
        }
    }
}
int main()
{
    get_prime();
    int n, m;
    cin >> n >> m;
    int v[n][m];
    int x = 0, tmp;
    for (int i = 0; i < n; i++)
    {
        bool prim = false;
        cin >> tmp;
        if (!a[tmp])
        {
            prim = true;
        }
        else
        {
            v[x][0] = tmp;
        }

        if (!prim)
        {
            for (int j = 1; j < m; j++)
            {
                cin >> v[x][j];
            }
            x++;
        }
        else
        {
            for (int j = 1; j < m; j++)
            {
                cin >> tmp;
            }
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}