#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long d = 2;
    long long max = 0;
    while (n > 1)
    {
        while (n % d == 0)
        {
            n /= d;
            if (d > max)
            {
                max = d;
            }
        }
        d++;
        if (d * d > n)
        {
            d = n;
        }
    }
    cout << max << endl;
}