#include <bits/stdc++.h>

using namespace std;
long long cmmnr(long long n);
int main()
{
    cout << cmmnr(142365798) << endl;
}

long long cmmnr(long long n)
{
    int v[11];
    int nrcif = 0, cif;
    long long max = 0;
    while (n > 0)
    {
        cif = n % 10;
        n /= 10;
        v[nrcif] = cif;
        nrcif++;
    }

    bool sortat = false;
    while (!sortat)
    {
        sortat = true;
        for (int i = 0; i < nrcif - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                swap(v[i], v[i + 1]);
                sortat = false;
            }
        }
    }
    for (int i = 0; i < nrcif; i++)
    {
        max = max * 10 + v[i];
    }
    return max;
}