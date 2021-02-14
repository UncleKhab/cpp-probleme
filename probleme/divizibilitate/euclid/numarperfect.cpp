#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int sum = 0;
    int d = 1;
    while (d * d < n)
    {
        if (n % d == 0)
        {
            int p = n / d;
            sum += p + d;
        }
        d++;
    }
    if (d * d == n)
    {
        sum += d;
    }
    if (2 * n == sum)
    {
        cout << n << " este perfect" << endl;
    }
    else
    {
        cout << n << " nu este perfect" << endl;
    }
}