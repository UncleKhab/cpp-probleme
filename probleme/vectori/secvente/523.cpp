#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n],
        st = 1,
        dr = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == v[i + 1])
        {
            int j = i;
            while (j < n && v[j] == v[j + 1])
            {
                j++;
            }
            if (j - i + 1 >= dr - st + 1)
            {
                st = i;
                dr = j;
            }
            i = j;
        }
    }
    cout << st << " " << dr << endl;
}