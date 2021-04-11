#include <bits/stdc++.h>

using namespace std;
long long int sum = 0;
int v[10];
int cub_cif(int n)
{
    while (n > 0)
    {
        int cif = n % 10;
        v[cif]++;
        n /= 10;
    }
    return 0;
}
int main()
{
    long long int n;
    int tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        cub_cif(tmp);
    }
    for (int i = 1; i < 10; i++)
    {
        if (v[i] > 0)
        {
            int cif_tmp = v[i] * (i * i * i);
            sum += cif_tmp;
        }
    }
    cout << sum << endl;
}