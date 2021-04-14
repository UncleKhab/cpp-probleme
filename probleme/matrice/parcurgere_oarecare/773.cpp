#include <bits/stdc++.h>

using namespace std;

int counter[1000005];

int main()
{
    int n, m;
    cin >> n >> m;
    int indx = -1, max = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            counter[tmp]++;
        }
    }
    for (int i = 0; i <= 1000000; i++)
    {
        if (counter[i] >= max)
        {
            indx = i;
            max = counter[i];
        }
    }
    cout << indx << endl;
}