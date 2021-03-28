#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    int st = -1,
        dr = -1,
        sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 1 && st == -1)
        {
            st = i;
        }
        if (v[i] % 2 == 1)
        {
            dr = i;
        }
    }
    for (int i = st; i <= dr; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
}