#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("secvcresc.in");
ofstream cout("secvcresc.out");

int main()
{
    int n;
    cin >> n;
    int v[n], st = 0, dr = 0, sec_max = dr - st + 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] < v[i + 1])
        {
            int tmp_st = i;
            while (v[i] < v[i + 1] && i + 1 < n)
            {
                i++;
            }
            int tmp_dr = i;
            if (tmp_dr - tmp_st + 1 > sec_max)
            {
                sec_max = tmp_dr - tmp_st + 1;
                st = tmp_st;
                dr = tmp_dr;
            }
        }
    }
    cout << st + 1 << " " << dr + 1 << endl;
}