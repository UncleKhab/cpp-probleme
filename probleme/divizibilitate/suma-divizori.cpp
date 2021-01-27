#include <iostream>

using namespace std;

int main()
{
    long long int n;
    long long int m = 1;
    long long int sum = 0;
    cin >> n;
    while (m * m <= n)
    {
        if (n % m == 0)
        {
            if (m * m < n)
            {
                sum += m + (n / m);
            }
            else
            {
                sum += m;
            }
        }
        m++;
    }
    cout << sum << endl;
}