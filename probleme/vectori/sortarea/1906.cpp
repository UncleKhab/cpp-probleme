#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("memory007.in");
ofstream cout("memory007.out");

// #include <bits/stdc++.h>
// using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int v[n], u[m];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> u[i];
    }

    // Bubble Sort
    bool sortat = false;

    while (!sortat)
    {
        sortat = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                sortat = false;
            }
        }
    }
    long long sum = 0;
    for (int i = 0; i < m; i++)
    {
        int index = u[i] - 1;
        if (u[i] <= n)
            sum += v[index];
    }
    cout << sum << endl;
}