#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long min = 0;
    long long val = (a + b);
    bool found = false;
    if ((a + b) % 2 != 0)
    {
        min = 1;
    }

    for (long long i = a; i <= b; i++)
    {
        bool ver_prim = true;
        long long p = 2;
        long long aux = i;
        while (aux > p)
        {
            if (aux % p == 0)
            {
                ver_prim = false;
            }
            p++;
            if (p * p > aux)
            {
                p = aux;
            }
        }
        if (ver_prim)
        {
            if (abs(a + b - (2 * i)) == min && i < val)
            {
                val = i;
                found = true;
            }
        }
    }
    if (found)
    {
        cout << val << endl;
    }
    else
    {
        cout << "Negasit";
    }
}