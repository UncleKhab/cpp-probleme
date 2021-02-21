#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int z[45];
    z[0] = 1;
    z[1] = 1;
    for (int i = 2; i < 46; i++)
    {
        z[i] = z[i - 1] + z[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        bool gasit = false;
        cin >> m;
        for (int j = 0; j < 45; j++)
        {
            if (m == z[j])
            {
                gasit = true;
            }
        }
        if (gasit)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NU" << endl;
        }
    }
}