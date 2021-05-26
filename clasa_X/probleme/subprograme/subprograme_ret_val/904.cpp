#include <bits/stdc++.h>

using namespace std;
long long concat(long long n, long long m);
int main()
{
    cout << concat(412, 27);
    return 0;
}

long long concat(long long n, long long m)
{
    int aux = m;
    int cif = 1;
    while (aux > 0)
    {
        cif *= 10;
        aux /= 10;
    }

    return (n * cif + m);
}