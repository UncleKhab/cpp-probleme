#include <fstream>
#include <algorithm>

using namespace std;
ifstream cin("halfsort.in");
ofstream cout("halfsort.out");

// #include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int half = n / 2;

    // insertion first half;
    for (int i = 1; i < half; i++)
    {
        int p = i - 1;
        int x = v[i];
        while (x < v[p] && p >= 0)
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
    }

    // selection sort second half
    if (n % 2 != 0)
    {
        half++;
    }
    for (int i = half; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}