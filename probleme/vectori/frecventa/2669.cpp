#include <bits/stdc++.h>

using namespace std;
int v[82];
void sum_cif(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    v[sum]++;
}

int main()
{
    int n, tmp, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum_cif(tmp);
    }
    for (int i = 0; i < 81; i++)
    {
        if (v[i] > 1)
        {
            sum += ((v[i] - 1) * v[i]) / 2;
        }
    }
    cout << sum << endl;
}