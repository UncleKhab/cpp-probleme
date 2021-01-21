#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long n, m, p;
    cin >> n;
    while (n > 0)
    {
        cin >> m;
        p = sqrt(m);
        if (m == p * p)
        {
            cout << "DA"
                 << "\n";
        }
        else
        {
            cout << "NU"
                 << "\n";
        }

        n--;
    }
}