#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("clase.in");
ofstream cout("clase.out");

bool binary_search(long long x, long long a[], int n)
{
    int st = 0;
    int dr = n;
    while (st <= dr)
    {
        int m = (st + dr) / 2;
        if (a[m] == x)
            return true;
        if (a[m] > x)
            dr = m - 1;
        else
            st = m + 1;
    }
    return false;
}
int main()
{
    int n, m;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int cnt = 0;
    long long tmp;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        if (binary_search(tmp, a, n))
            cnt++;
    }
    cout << cnt;
}