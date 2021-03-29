#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sumsec.in");
ofstream cout("sumsec.out");
bool is_prim(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
        return true;
    int d = 2;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    if (d * d == n)
    {
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int v[1001];
    long long sum = 0;
    int st = -1, dr = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (is_prim(v[i]))
        {
            if (st == -1)
            {
                st = i;
                dr = i;
            }
            else
            {
                dr = i;
            }
        }
    }
    for (int i = st; i <= dr; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
}