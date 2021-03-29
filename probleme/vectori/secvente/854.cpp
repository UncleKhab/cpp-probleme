#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, cnt = 0, nr_sec = 0;
    long long tmp;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp % 2 != 0)
        {
            cnt++;
        }
    }
    nr_sec = cnt / k;
    if (cnt % k != 0)
        nr_sec++;
    cout << nr_sec << endl;
}