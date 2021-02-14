#include <iostream>

using namespace std;

int main()
{
    int n, d = 2;
    bool prim = true;
    cin >> n;
    if (n <= 1)
    {
        prim = false;
    }
    else
    {
        while (d * d <= n)
        {
            if (n % d == 0)
            {
                prim = false;
            }
            d++;
        }
    }

    if (prim)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}