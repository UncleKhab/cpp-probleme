#include <bits/stdc++.h>
using namespace std;
bool a[1000001];
void generate_prime()
{
    a[0] = a[1] = true;

    for (int d = 2; d <= 1000; d++)
    {
        if (!a[d])
        {
            int max = 1000000 / d;
            for (int i = 2; i <= max; i++)
            {
                a[i * d] = true;
            }
        }
    }
}
int main()
{
    generate_prime();
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

    for (int i = 0; i < n; i++)
    {
        int t = v[i][0];
        if (a[t] != 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << v[i][j] << " ";
            }
        }
        cout << endl;
    }
}
