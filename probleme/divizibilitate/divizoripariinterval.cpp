#include <iostream>

using namespace std;

int main()
{
    int a,
        b;
    cin >> a >> b;
    int NRD = 0,
        MIN = 1000000001,
        MAX = 0;

    for (int i = b; i >= a; i--)
    {
        int d = 1;
        int nrDivizoriCurent = 0;
        while (d * d <= i)
        {
            if (d * d == i && d % 2 == 0)
            {
                nrDivizoriCurent++;
            }
            else
            {
                if (i % d == 0)
                {
                    int p = i / d;
                    if (d % 2 == 0)
                        nrDivizoriCurent++;
                    if (p % 2 == 0)
                        nrDivizoriCurent++;
                }
            }

            d++;
        }
        if (nrDivizoriCurent >= NRD)
        {
            NRD = nrDivizoriCurent;
            if (i < MIN)
            {
                MIN = i;
            }
        }
    }
    for (int i = b; i >= a; i--)
    {
        int d = 1;
        int nrDivizoriCurent = 0;
        while (d * d <= i)
        {
            if (d * d == i && d % 2 == 0)
            {
                nrDivizoriCurent++;
            }
            else
            {
                if (i % d == 0)
                {
                    int p = i / d;
                    if (d % 2 == 0)
                        nrDivizoriCurent++;
                    if (p % 2 == 0)
                        nrDivizoriCurent++;
                }
            }

            d++;
        }
        if (nrDivizoriCurent == NRD && i > MAX)
        {
            MAX = i;
            break;
        }
    }

    cout << NRD << " " << MIN << " " << MAX << endl;
}