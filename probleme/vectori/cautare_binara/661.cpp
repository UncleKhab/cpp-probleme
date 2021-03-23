#include <bits/stdc++.h>

using namespace std;
int n, a[1001];

int BnMax(int x, int start, int end)
{
    int l = start;
    int r = end;
    int m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return r;
}
int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int sum = a[i] + a[j];
            int p1 = BnMax(sum, j + 1, n - 1);
            cnt += p1 - j;
        }
    }

    cout << cnt << '\n';
}