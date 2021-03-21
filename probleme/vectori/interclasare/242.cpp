#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("interclasm.in");
ofstream cout("interclasm.out");

using namespace std;
int main()
{
    int n, m, x;
    cin >> x >> n;
    int a[n], ai = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % x == 0)
            a[ai++] = tmp;
    }
    cin >> m;
    int b[m], bi = 0;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % x == 0)
            b[bi++] = tmp;
    }
    int i = 0,
        j = 0,
        k = 0,
        c[n + m];

    while (i < ai && j < bi)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else if (a[i] == b[j])
        {
            i++, j++;
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    int l = 0;
    int p = 0;
    while (i < ai)
    {
        int gasit = false;
        while (p < bi && a[i] >= b[p])
        {
            if (a[i] == b[p])
            {
                gasit = true;
            }
            p++;
        }
        if (!gasit)
        {
            c[k++] = a[i++];
        }
        else
            i++;
    }
    while (j < bi)
    {
        int gasit = false;
        while (p < ai && b[j] >= a[p])
        {
            if (b[j] == a[p])
            {
                gasit = true;
            }
            p++;
        }
        if (!gasit)
        {
            c[k++] = b[j++];
        }
        else
            j++;
    }
    for (i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
}