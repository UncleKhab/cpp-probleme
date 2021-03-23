#include <bits/stdc++.h>

using namespace std;

int n, a[100001];

int binar_search(int x, int start, int end)
{
    int l = start,
        r = end,
        m;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] == x)
        {
            return m;
        }
        else if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main()
{
    cin >> n;
    int v[31];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    sort(a, a + n);
    v[0] = 1;
    for (int i = 1; i < 31; i++)
    {
        v[i] = v[i - 1] * 2;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 30; j >= 0; j--)
        {
            if (a[i] > v[j])
                break;
            int nr = v[j] - a[i];
            int indx = binar_search(nr, i + 1, n - 1);
            if (indx != -1)
            {
                cnt++;
                int k = indx - 1;
                while (k > i)
                {
                    if (a[k] == a[indx])
                    {
                        cnt++;
                    }
                    if (a[k] < a[indx])
                        break;
                    k--;
                }
                k = indx + 1;
                while (k < n)
                {
                    if (a[k] == a[indx])
                    {
                        cnt++;
                    }
                    if (a[k] > a[indx])
                        break;
                    k++;
                }
            }
        }
    }
    cout << cnt << endl;
}