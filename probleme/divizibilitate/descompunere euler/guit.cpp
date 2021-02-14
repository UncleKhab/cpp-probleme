#include <iostream>
using namespace std;

int main()
{
    long long n, sum = 0;
    ;
    cin >> n;
    long int d = 2;
    while (n > 1)
    {
        if (n % d == 0)
        {
            while (n % d == 0)
            {
                n /= d;
            }
            sum += d;
        }
        d++;
        if (d * d > n)
        {
            d = n;
        }
    }
    cout << sum << endl;
}