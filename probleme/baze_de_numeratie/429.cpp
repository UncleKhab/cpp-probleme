#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cif0 = 0, cif1 = 0;
    while (n)
    {
        int p = n % 2;
        if (p == 0)
        {
            cif0++;
        }
        else
        {
            cif1++;
        }
        n /= 2;
    }
    cout << cif0 << " " << cif1 << endl;
}