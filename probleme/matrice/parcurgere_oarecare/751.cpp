#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, x;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    cin >> k;
    for (int p = 0; p < k; p++)
    {
        int counter = 0;
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            bool gasit = false;
            for (int j = 0; j < m && !gasit; j++)
            {
                if (x == v[i][j])
                {
                    counter++;
                    gasit = true;
                }
            }
        }
        if (counter == n)
        {
            cout << "DA" << endl;
        }
        else
            cout << "NU" << endl;
    }
}
