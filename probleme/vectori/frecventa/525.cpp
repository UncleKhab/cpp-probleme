#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tmp;
    cin >> n;
    int u[1000];
    for (int i = 100; i < 1000; i++)
    {
        u[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp > 99 && tmp < 1000)
        {
            u[tmp] = 1;
        }
    }
    int st = 99, dr = 99;
    for (int i = 999; i >= 100; i--)
    {
        if (u[i] == 0)
        {
            if (dr == 99)
            {
                dr = i;
            }
            else if (st == 99)
            {
                st = i;
            }
        }
        if (st > 99 && dr > 99)
            break;
    }
    if (st > 99 && dr > 99)
    {
        cout << st << " " << dr << endl;
    }
    else
    {
        cout << "NU EXISTA" << endl;
    }
}
