#include <bits/stdc++.h>
using namespace std;
int x[101];
int main()
{
    int n;
    cin >> n;
    int tmp, nr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        x[tmp]++;
        if (x[tmp] == 2)
        {
            nr++;
            x[tmp] = 0;
        }
    }
    cout << nr << endl;
}
