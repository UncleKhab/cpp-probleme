#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Selection Sort
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

    // Insertion Sort
    int point;
    for (int i = 1; i < n && v[i] < 0; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (x > v[p] && p >= 0)
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
        point = i + 1;
    }

    while (v[point] == 0 && point < n)
    {
        point++;
    }

    // Bubble Sort
    bool sorted = false;
    int m = n - 1;
    while (!sorted)
    {
        sorted = true;
        int p = m;
        for (int i = point; i < p; i++)
        {
            if (v[i] < v[i + 1])
            {
                swap(v[i], v[i + 1]);
                m = i;
                sorted = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}