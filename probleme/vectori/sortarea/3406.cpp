#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // selection
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    int mij = (n / 2);
    for (int i = mij; k && i < n; i++)
    {
        v[i]++;
        k--;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    cout << v[mij] << endl;
}