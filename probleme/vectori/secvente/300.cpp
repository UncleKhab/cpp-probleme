#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sumainsecv.in");
ofstream cout("sumainsecv.out");
int main()
{
    int n, s, sum = 0, st = 0, dr = 0;
    cin >> n >> s;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int tmp_st = i;
        int tmp_dr = i;
        sum = 0;
        while (sum < s && tmp_dr < n)
        {
            sum += v[tmp_dr];
            tmp_dr++;
        }
        if (sum == s)
        {
            st = tmp_st + 1;
            dr = tmp_dr;
        }
        if (dr != 0)
        {
            break;
        }
    }
    cout << st << " " << dr << endl;
}
