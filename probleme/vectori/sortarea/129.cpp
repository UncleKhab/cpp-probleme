#include <fstream>
// #include <bits/stdc++.h>
#include <algorithm>

using namespace std;

ifstream cin("sortare.in");
ofstream cout("sortare.out");

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //Selection Sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[i] < v[j])
    //         {
    //             swap(v[i], v[j]);
    //         }
    //     }
    // }

    //Insertion Sort
    // for (int i = 1; i < n; i++)
    // {
    //     int p = i - 1;
    //     int x = v[i];
    //     while (x > v[p] && p >= 0)
    //     {
    //         v[p + 1] = v[p];
    //         p--;
    //     }
    //     v[p + 1] = x;
    // }

    //Bubble Sort
    bool sortat = false;
    int m = n - 1;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p; i++)
        {
            if (v[i] < v[i + 1])
            {
                swap(v[i], v[i + 1]);
                sortat = false;
                m = i;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}