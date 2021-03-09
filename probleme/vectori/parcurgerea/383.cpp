#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        int mult;
        cin >> v[i];
        mult = v[i] / k;
        int k1, k2;
        k1 = mult * k;
        k2 = (mult + 1) * k;
        if (v[i] - k1 <= k2 - v[i])
            v[i] = k1;
        else
            v[i] = k2;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}