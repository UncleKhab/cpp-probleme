#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x1, x2, x3;
    bool exista = false;
    x1 = n / 2;
    int d = 1;
    while (d * d < x1)
    {
        if (x1 % d == 0)
        {
            int p = x1 / d;
            if (n % (x1 - d) == 0)
            {
                x2 = x1 - d;
                x3 = d;
                exista = true;
            }
            else if (d != 1 && n % (x1 - p) == 0)
            {
                x2 = x1 - p;
                x3 = p;
                exista = true;
            }

            if (x2 == x3)
            {
                exista = false;
            }
        }
        d++;
    }
    if (exista)
    {
        cout << x3 << " " << x2 << " " << x1 << endl;
    }
    else
    {
        cout << "nu exista";
    }

    return 0;
}