#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long m = n;
    long long int d = 2;
    long long p = 1;
    while (n > 1)
    {
        if (n % d == 0)
        {
            int cnt = 0;
            while (n % d == 0)
            {
                cnt++;
                n /= d;
            }
            p *= (cnt * m + 1);
        }
        d++;
        if (d * d > n)
        {
            d = n;
        }
        while (p >= 59999)
        {
            p %= 59999;
        }
    }
    cout << p % 59999 << endl;
}