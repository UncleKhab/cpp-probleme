#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int sum = 0, d = 1;
    while (d * d < n)
    {
        if (n % d == 0)
        {
            int p = n / d;
            sum += d + p;
        }
        d++;
    }
    if (d * d == n)
    {
        sum += d;
    }
    if (sum % n == 0)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}