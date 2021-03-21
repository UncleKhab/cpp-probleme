#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

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
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 1, c[n + m];
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (a[i] == c[k])
                i++;
            else
                c[k++] = a[i++];
        }
        else if (b[j] == a[i])
        {
            c[k++] = b[j++];
            i++;
        }
        else
        {
            if (b[j] == c[k])
                j++;
            else
                c[k++] = b[j++];
        }
    }
    while (i < n)
    {
        if (a[i] == c[k])
            i++;
        else
            c[k++] = a[i++];
    }
    while (j < m)
    {
        if (b[j] == c[k])
            j++;
        else
            c[k++] = b[j++];
    }
    for (i = 1; i < k; i++)
    {
        cout << c[i] << " ";
        if (i % 10 == 0)
        {
            cout << '\n';
        }
    }
}