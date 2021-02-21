#include <iostream>
using namespace std;
int main()
{
    unsigned long long n, m;
    cin >> n >> m;
    int p = 2;
    bool same_factors = true;
    if (m == n)
    {
        cout << "DA" << endl;
    }
    else
    {
        while (n > 1)
        {

            if (n % p == 0)
            {
                if (m % p != 0)
                {
                    same_factors = false;
                }
                while (n % p == 0)
                {
                    n /= p;
                }
                while (m % p == 0 && m > 1)
                {
                    m /= p;
                }
            }
            p++;
            if (p * p > n)
                p = n;
        }
        if (m == 1 && same_factors == true)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NU" << endl;
        }
    }
}