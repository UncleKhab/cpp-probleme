#include <bits/stdc++.h>
using namespace std;
long long int a[11], sum;
int nrdiv(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
            cnt += 2;
        if (i * i == n)
            cnt--;
    }
    return cnt;
}
int main()
{
    int n, t, p;
    cin >> n >> t >> p;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], sum += a[i];
    int min = 1000000000;
    for (int i = 1; i <= p; ++i)
        if (a[i] < min)
            min = a[i];
    int max = 0;
    for (int i = 1; i <= p; ++i)
        if (a[i] > max)
            max = a[i];
    if (t == 1)
    {
        int s = 0;
        while (min)
        {
            s += min % 10;
            min /= 10;
        }
        cout << s << endl
             << sum;
    }
    else
    {
        cout << nrdiv(max) << endl
             << sum;
    }
    return 0;
}