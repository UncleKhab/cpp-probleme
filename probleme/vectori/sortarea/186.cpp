#include <bits/stdc++.h>

using namespace std;

int cif_min(int n)
{
    int min = 1000000001;
    while (n)
    {
        int tmp = n % 10;
        if (tmp < min)
        {
            min = tmp;
        }
        n /= 10;
    }
    return min;
}
int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        v[i] = cif_min(aux);
    }
    bool sortat = false;
    int m = n - 1;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                sortat = false;
                m = i;
            }
        }
    }
    if (v[0] == 0)
    {
        bool gasit = false;
        for (int i = 1; i < n && !gasit; i++)
        {
            if (v[i] > 0)
            {
                gasit = true;
                swap(v[0], v[i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
}