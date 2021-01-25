#include <iostream>

using namespace std;

int main()
{
    int n, m, counter = 0, cif_max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cif_max = 0;
        while (m > 0)
        {
            if (m % 10 > cif_max)
            {
                cif_max = m % 10;
            }
            m /= 10;
        }
        if (cif_max % 2 != 0)
        {
            counter++;
        }
    }
    cout << counter << "\n";
}