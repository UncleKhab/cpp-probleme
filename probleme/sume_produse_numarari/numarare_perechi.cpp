#include <iostream>

using namespace std;

int main()
{
    int n, cp, ca, nr_perechi = 0;
    cin >> n;
    if (n != 0)
    {
        cp = abs(n % 10);
        cin >> n;
        while (n != 0)
        {
            ca = abs(n % 10);
            if (cp == ca)
            {
                nr_perechi++;
            }
            cp = ca;
            cin >> n;
        }
    }

    cout << nr_perechi << endl;
}

// 0 15 63 403 123 55 15 4 0