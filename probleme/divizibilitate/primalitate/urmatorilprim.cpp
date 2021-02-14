#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool gasit = false;
    while (!gasit)
    {
        n++;
        int d = 1;
        long long sum = 0;
        while (d * d <= n)
        {
            if (n % d == 0)
            {
                sum += d + n / d;
            }
            d++;
        }
        if (n + 1 == sum)
        {
            gasit = true;
        }
    }
    cout << n << endl;
}