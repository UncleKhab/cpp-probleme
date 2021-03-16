#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long int v[n], u[n];
    int par = 0;
    int impar = 0;
    for (int i = 0; i < n; i++)
    {
        long int tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
        {
            v[par] = tmp;
            par++;
        }
        else
        {
            u[impar] = tmp;
            impar++;
        }
    }
    // Selection Sort
    for (int i = 0; i < par - 1; i++)
    {
        for (int j = i + 1; j < par; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }

    // Bubble Sort
    bool sortat = false;
    int m = impar - 1;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p; i++)
        {
            if (u[i] > u[i + 1])
            {
                swap(u[i], u[i + 1]);
                sortat = false;
                m = i;
            }
        }
    }
    for (int i = 0; i < par; i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < impar; i++)
    {
        cout << u[i] << " ";
    }
    cout << endl;
}
