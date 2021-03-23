#include <bits/stdc++.h>
using namespace std;

bool binary_search(int n, int arr[], int len)
{
    // indice 1
    int st = 1;
    // indice 2(sfarsitul Vectorului)
    int dr = len;
    // Atat timp cat primul indice este mai mic sau egal
    while (st <= dr)
    {
        // calculam mijlocul vectorului
        int m = (st + dr) / 2;
        // daca am gasit nr cautat, returnam adevarat
        if (arr[m] == n)
            return true;
        // daca elementul din mijloc este mai mare,
        // cautam in prima jumatate. Avem de la 1 la m-1 pentru ca m deja este comparat.
        if (arr[m] > n)
        {
            dr = m - 1;
        }
        // altfel cautam in a 2-a jumatate, avem de la m+1 pana la dr pentru ca m este deja comparat.
        else
        {
            st = m + 1;
        }
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        if (binary_search(tmp, a, n))
            b[i] = 1;
        else
            b[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}