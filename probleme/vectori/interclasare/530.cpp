#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m],
        c[n + m],
        d[n + m],
        j = 0,
        k = 1,
        l = 0,
        i = 0;

    for (i = 0; i < m; i++)
    {
        cin >> b[i];
        while (b[i] >= a[j] && j < n)
        {
            if (b[i] == a[j])
            {
                c[k++] = b[i];
            }
            j++;
        }
    }
    i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            d[l++] = a[i++];
        }
        else if (a[i] == b[j])
        {
            d[l++] = a[i++];
            j++;
        }
        else
        {
            d[l++] = b[j++];
        }
    }
    while (i < n)
    {
        d[l++] = a[i++];
    }
    while (j < m)
    {
        d[l++] = b[j++];
    }
    for (i = 0; i < l; i++)
    {
        cout << d[i] << " ";
    }
    cout << '\n';
    for (i = 1; i < k; i++)
    {
        cout << c[i] << " ";
    }
}