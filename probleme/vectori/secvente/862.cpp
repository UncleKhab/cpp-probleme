#include <bits/stdc++.h>

using namespace std;
int n, t, k;
int v[100001];
bool is_correct(int dr, int j)
{
    if (j == 0)
    {
        if (v[dr] <= t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (v[dr] <= t)
    {
        return is_correct(dr - 1, j - 1);
    }
    else
        return false;
}

int main()
{
    cin >> n >> t >> k;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int j = k - 2;
        bool gasit = false;
        cin >> v[i];
        if (v[i] <= t && i >= k - 1)
        {
            gasit = is_correct(i - 1, j);
        }
        if (gasit)
            cnt++;
    }

    cout << cnt << endl;
}
