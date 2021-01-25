#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int cif = -1;
    if (n == 0)
    {
        cout << 0 << "\n";
    }
    else
    {
        while (n > 0)
        {
            int m = n % 10;
            if (m % 2 == 0 && m > cif)
            {
                cif = m;
            }
            n /= 10;
        }
        if (cif > -1)
        {
            cout << cif << "\n";
        }
        else
        {
            cout << 10 << "\n";
        }
    }
}