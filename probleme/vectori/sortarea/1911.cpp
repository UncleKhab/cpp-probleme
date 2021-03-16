#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n], u[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        u[i] = v[i];
    }

    //Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
                swap(v[i], v[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        bool gasit = false;
        for (int j = 0; j < n && !gasit; j++)
        {
            if (x == u[j])
            {
                cout << x << " " << j + 1 << " ";
                gasit = true;
                u[j] = -1;
            }
        }
    }
    cout << endl;
}