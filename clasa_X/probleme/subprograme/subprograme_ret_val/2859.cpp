#include <bits/stdc++.h>

using namespace std;

int TreiCifImp(long long n);

int main()
{
    cout << TreiCifImp(114);
    return 0;
}

int TreiCifImp(long long n)
{
    bool contine = false;
    int nr_cif = 0;
    while (n > 0)
    {
        int cur_cif = n % 10;
        n /= 10;
        if (cur_cif % 2 == 0)
            nr_cif = 0;
        else
            nr_cif++;

        if (nr_cif >= 3)
            contine = true;
    }
    if (contine)
        return 1;
    return 0;
}