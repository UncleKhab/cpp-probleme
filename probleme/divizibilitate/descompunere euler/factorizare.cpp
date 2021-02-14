#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int d = 2;
    while (n > 1)
    {
        int cnt = 0;
        while (n % d == 0)
        {
            cnt++;
            n /= d;
        }
        if (cnt)
        {
            cout << d << " " << cnt << endl;
        }
        d++;
        if (d * d > n)
        {
            d = n;
        }
    }
}