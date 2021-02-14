#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int m = 1;
    long long int sum = 0;

    while (m * m < n)
    {
        if (n % m == 0)
        {
            int p = n / m;
            if (m % 2 == 0)
            {
                sum += m;
            }
            if (p % 2 == 0)
            {
                sum += p;
            }
        }
        m++;
    }
    if (m * m == n)
    {
        if (m % 2 == 0)
        {
            sum += m;
        }
    }
    cout << sum << endl;
}