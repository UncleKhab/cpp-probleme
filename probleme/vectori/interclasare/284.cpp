#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("interclasare3.in");
ofstream cout("interclasare3.out");

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    int a[n], la = 0;
    int b[m], lb = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
        {
            a[la++] = tmp;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
        {
            b[lb++] = tmp;
        }
    }
    int i = 0,
        j = lb - 1,
        k = 1,
        c[n + m];
    while (i < la && j >= 0)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else if (a[i] == b[j])
        {
            c[k++] = a[i++];
            c[k++] = b[j--];
        }
        else
        {
            c[k++] = b[j--];
        }
    }
    while (i < la)
    {
        c[k++] = a[i++];
    }
    while (j >= 0)
    {
        c[k++] = b[j--];
    }
    for (i = 1; i < k; i++)
    {
        cout << c[i] << " ";
        if (i % 20 == 0)
        {
            cout << '\n';
        }
    }
}