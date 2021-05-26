#include <bits/stdc++.h>

using namespace std;
long long sumfactcif(long long n);
int main()
{
    cout << sumfactcif(241);
}

long long sumfactcif(long long n)
{
    long long sum = 0;
    if (n == 0)
        return 1;
    while (n > 0)
    {
        int cif = n % 10;
        long fact = 1;
        n /= 10;
        for (int i = 1; i <= cif; i++)
        {
            fact *= i;
        }
        sum += fact;
    }
    return sum;
}