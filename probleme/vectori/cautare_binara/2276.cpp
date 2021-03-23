#include <bits/stdc++.h>

using namespace std;
const int MAX_NR = 200001;
int a[MAX_NR], n, t;

int poz_min(int y);
int poz_max(int x);

int main()
{

    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // bubble sort
    // bool sortat = false;
    // int o = n - 1;
    // while (!sortat)
    // {

    //     sortat = true;
    //     int p = o;
    //     for (int i = 0; i < p; i++)
    //     {
    //         if (a[i] > a[i + 1])
    //         {
    //             sortat = false;
    //             swap(a[i], a[i + 1]);
    //             o = i;
    //         }
    //     }
    // }
    sort(a, a + n);
    int x, y;
    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;
        int p1 = poz_min(x);
        int p2 = poz_max(y);
        if (p1 == -1)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << p2 - p1 + 1 << '\n';
        }
    }
}
int poz_min(int v)
{
    int st = 0,
        dr = n - 1,
        m,
        poz = -1;

    while (st <= dr)
    {
        m = (st + dr) / 2;
        if (a[m] >= v)
        {
            poz = m;
            dr = m - 1;
        }
        else
        {
            st = m + 1;
        }
    }
    return poz;
}
int poz_max(int v)
{
    int st = 0,
        dr = n - 1,
        m,
        poz = -1;
    while (st <= dr)
    {
        m = (st + dr) / 2;
        if (a[m] <= v)
        {
            st = m + 1;
            poz = m;
        }
        else
        {
            dr = m - 1;
        }
    }
    return poz;
}