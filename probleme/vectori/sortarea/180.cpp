#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], max = 0, min = 1000001, indx_min, indx_max;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
            max = v[i], indx_max = i;
        if (v[i] < min)
            min = v[i], indx_min = i;
    }
    if (indx_min > indx_max)
        swap(indx_min, indx_max);

    bool sortat = false;
    int m = indx_max + 1;
    while (!sortat)
    {
        int p = m;
        sortat = true;
        for (int i = indx_min; i < p - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                sortat = false;
                m = i + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}