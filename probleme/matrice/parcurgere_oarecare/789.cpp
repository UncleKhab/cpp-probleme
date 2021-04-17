#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int n, m;
    cin >> n >> m;
    int max = 0, tmp;
    bool gasit = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            a[tmp]++;
        }
    }
    for (int i = 0; i < 1000000; i++)
    {
        if (a[i] >= 2 && i > max)
        {
            max = i;
            gasit = true;
        }
    }
    if (gasit)
    {
        cout << max << endl;
    }
    else
        cout << "IMPOSIBIL" << endl;
}
