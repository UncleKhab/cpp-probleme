#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int l, r, s;
    s = 0;
    cin >> l >> r;
    if (l % 2 != 0)
    {
        l++;
    }
    if (r % 2 != 0)
    {
        r--;
    }
    for (int i = l; i <= r; i += 2)
    {
        for (int j = l; j <= r; j += 2)
        {
            s++;
        }
    }
    cout << s;
}