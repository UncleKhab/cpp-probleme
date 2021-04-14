#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long int v[n][m + 1];
    for (int i = 0; i < n; i++)
    {
        long int sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            sum += v[i][j];
        }
        v[i][m] = sum;
    }

    bool terminat = false;
    while (!terminat)
    {
        terminat = true;
        long int min = 100000000, indx = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i][m] < min)
            {
                min = v[i][m];
                indx = i;
                terminat = false;
            }
        }
        v[indx][m] = 100000000;
        if (!terminat)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[indx][j] << " ";
            }
            cout << endl;
        }
    }
}