#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, cnt = 0;
    cin >> n;
    long long int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        long long c = 1;
        while (v[i] == v[i + 1] && i + 1 < n)
        {
            c++;
            i++;
        }
        cnt += c * (c + 1) / 2;
    }
    cout << cnt << endl;
}