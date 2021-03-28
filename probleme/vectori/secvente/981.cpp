#include <bits/stdc++.h>

using namespace std;
bool all_one(int x)
{
    while (x > 1)
    {
        if (x % 2 != 1)
        {
            return false;
        }
        x /= 2;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int v[n];
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (all_one(v[i] == 1))
        {
            int cnt_now = 0;
            int j = i;
            while (j < n && all_one(v[j + 1]) == 1)
            {
                j++;
                cnt_now++;
            }
            if (cnt_now > cnt)
            {
                cnt = cnt_now;
            }
        }
    }
    cout << cnt << endl;
}