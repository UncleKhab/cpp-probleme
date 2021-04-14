#include <bits/stdc++.h>

using namespace std;
int counter[1000005];

int main()
{
    int n, m, max = 0;
    cin >> n >> m;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            counter[tmp]++;
            if (counter[tmp] > max)
            {
                max = counter[tmp];
            }
        }
    }
    for (int i = 0; i <= 1000000; i++)
    {
        if (counter[i] == max)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}