#include <bits/stdc++.h>

using namespace std;
bool a[1000005];
void ciur()
{
    a[0] = a[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        if (a[i] == 0)
            for (int j = 2; j * i <= 1000000; j++)
            {
                a[i * j] = 1;
            }
    }
}
int main()
{
    ciur();
    int n, m, tmp, nr = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> tmp;
                if (!a[tmp])
                    nr++;
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cin >> tmp;
            }
        }
    }
    cout << nr << endl;
}