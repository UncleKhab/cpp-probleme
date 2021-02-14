#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long eu = 1;
    int d = 2;

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
            eu *= (d - 1) * pow(d, --cnt);
        }
        d++;
        if (d * d > n)
        {
            d = n;
        }
    }
    cout << eu << endl;
}

//(pk-1)*pk^(ek-1)