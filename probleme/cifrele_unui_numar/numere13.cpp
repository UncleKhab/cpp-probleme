#include <iostream>

using namespace std;

int main()
{
    int cif1 = 1, cif2 = 1, counter = 0;
    cin >> cif1 >> cif2;
    while (cif1 != 0 && cif2 != 0)
    {
        cif1 = abs(cif1);
        cif2 = abs(cif2);
        while (cif1 > 9)
            cif1 /= 10;
        while (cif2 > 9)
            cif2 /= 10;

        if (cif1 == cif2)
            counter++;
        cin >> cif1 >> cif2;
    }
    cout << counter << endl;
}