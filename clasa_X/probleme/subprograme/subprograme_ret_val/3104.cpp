#include <bits/stdc++.h>

using namespace std;

int Egal(long long n);
int main()
{
    cout << Egal(7921470);
    return 0;
}

int Egal(long long n)
{
    int x = 0;
    bool egale = true;
    while (n > 0)
    {
        int cif = n % 10;
        if (cif % 2 != 0)
        {
            if (x == 0)
                x = cif;
            else if (cif != x)
                egale = false;
        }
        n /= 10;
    }
    if (egale)
        return 1;
    return 0;
}