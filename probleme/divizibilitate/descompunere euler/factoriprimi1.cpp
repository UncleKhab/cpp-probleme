#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, m = 1;
    int p = 2;
    cin >> n;
    while (n > 1)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
            }
            m *= p;
        }
        p++;
        if (p * p > n)
        {
            p = n;
        }
    }
    cout << m << endl;
}