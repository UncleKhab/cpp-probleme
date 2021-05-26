#include <bits/stdc++.h>

using namespace std;
int sumcif(int n);
int main()
{
    cout << sumcif(111);
}

int sumcif(int n)
{
    int cif = 0;
    int sum = 0;
    while (n > 0)
    {
        cif += n % 10;
        n /= 10;
        sum += cif;
    }
    return cif;
}