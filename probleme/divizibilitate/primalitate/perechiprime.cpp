#include <iostream>

using namespace std;

int main()
{
    int n, m = 3, prev = 0;
    cin >> n;
    while (n)
    {
        int d = 1, sum = 0;
        while (d * d <= m)
        {
            if (m % d == 0)
            {
                sum += d + m / d;
            }
            d++;
        }
        if (m + 1 == sum)
        {
            if (m - prev == 2)
            {
                cout << prev << " " << m << endl;
                n--;
            }
            prev = m;
        }
        m++;
    }
}