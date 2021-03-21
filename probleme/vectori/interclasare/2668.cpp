#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], tmp, min = -1, p = 0, bi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        while (aux >= a[p] && p < n)
        {
            if (aux == a[p] && b[bi] != aux)
                b[bi++] = aux;
            p++;
        }
    }

    p = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        bool gasit = false;
        while (tmp >= b[p] && p < bi)
        {
            if (tmp == b[p])
            {
                min = tmp;
                gasit = true;
            }
            p++;
        }
        if (gasit)
            break;
    }
    cout << min << endl;
}