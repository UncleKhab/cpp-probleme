#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mij = n / 2;
    double v[n][n];
    double aux[n + 1][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            if (i < mij)
            {
                aux[i][j] = v[i][j];
            }
            else
            {
                aux[i + 1][j] = v[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        double med = 0;
        for (int j = 0; j < n; j++)
        {
            med += v[j][i];
        }
        med = med / n;
        aux[mij][i] = med;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << aux[i][j] << " ";
        }
        cout << endl;
    }
}