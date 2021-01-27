#include <iostream>

using namespace std;

int main()
{
    int n, m = 1;
    cin >> n;
    long long int sum = 0;
    while (m * m < n)
    {
        if (n % m == 0)
        {
            int pereche = n / m;
            if (m % 2 != 0)
                sum += m;
            if (pereche % 2 != 0)
                sum += pereche;
        }
        m++;
    }
    if (m * m == n)
    {
        if (m % 2 != 0)
        {
            sum += m;
        }
    }

    cout << sum << endl;
}