#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int max_sum = 0, sum = 0, indx = 0, tmp;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                sum += tmp;
            }
        }
        if (sum > max_sum)
        {
            max_sum = sum;
            indx = i;
        }
    }
    cout << indx << endl;
}
