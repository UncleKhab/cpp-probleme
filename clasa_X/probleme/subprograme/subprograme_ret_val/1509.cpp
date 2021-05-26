#include <bits/stdc++.h>

using namespace std;
long long int nrmaxim(long long int n);
int main()
{
    cout << nrmaxim(4273);
}

long long int nrmaxim(long long int n)
{
    long long int z = n, max = n;
    long long int ord = 1;
    long long int cif = 0;
    while (z > 0)
    {
        cif++;
        ord = ord * 10;
        z /= 10;
    }
    ord /= 10;
    for (int i = 1; i < cif; i++)
    {
        int p = n / ord;
        n = ((n % ord) * 10) + p;
        if (n > max)
            max = n;
    }
    return max;
}