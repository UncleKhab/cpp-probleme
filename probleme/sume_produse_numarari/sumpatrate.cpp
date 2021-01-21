#include <iostream>

using namespace std;

int main()
{
    unsigned long long n, mod = 10234573, a, b;
    // n(n+1)(n+2)
    cin >> n;
    a = n + 1;
    b = 2 * n + 1;
    if (n % 2 == 0)
        n /= 2;
    else
        a /= 2;

    if (n % 3 == 0)
        n /= 3;
    else if (a % 3 == 0)
        a /= 3;
    else
        b /= 3;

    cout << n % mod * a % mod * b % mod;
}