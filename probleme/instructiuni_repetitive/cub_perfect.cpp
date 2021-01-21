#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, p;
    long int m;
    float o;
    o = 1.0 / 3;
    cin >> n;
    while (n > 0)
    {
        cin >> m;
        if (m < 0)
        {
            m = abs(m);
        }
        p = (int)pow(m, o);
        if (m == (p * p * p))
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