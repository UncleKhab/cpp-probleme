#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, val_pare = 0, val_impare = 0;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            val_pare++;
        }
        else
        {
            val_impare++;
        }
    }
    cout << abs(val_pare - val_impare) << endl;
}