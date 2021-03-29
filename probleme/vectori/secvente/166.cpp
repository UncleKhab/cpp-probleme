#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("secvmax.in");
ofstream cout("secvmax.out");

int main()
{
    int n;
    cin >> n;
    int v[n], max = 0, cnt = 0, max_sum = 0, sum = 0, st, dr;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        sum = 0;
        if (v[i] % 2 == 0)
        {
            int tmp_st = i;
            while (v[i] % 2 == 0 && i < n)
            {
                sum += v[i];
                cnt++;
                i++;
            }
            i--;
            int tmp_dr = i;
            if (cnt >= max && sum > max_sum)
            {
                max = cnt;
                max_sum = sum;
                st = tmp_st;
                dr = tmp_dr;
            }
        }
    }
    cout << st + 1 << " " << dr + 1 << endl;
}