#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("interclasare.in");
ofstream cout("interclasare.out");

int main()
{
    int n, m;
    cin >> n;
    int a[n], i = 0, j = 0;
    while (i < n)
    {
        cin >> a[i++];
    }
    cin >> m;
    int b[m];
    i = 0;
    while (i < m)
    {
        cin >> b[i++];
    }
    int c[n + m], k = 1;
    i = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < m)
    {
        c[k++] = b[j++];
    }

    for (int e = 1; e < k; e++)
    {
        cout << c[e] << " ";
        if (e % 10 == 0)
        {
            cout << '\n';
        }
    }
}