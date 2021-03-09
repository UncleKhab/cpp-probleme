#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], max = 0, min = 100001, imin = 0, imax = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
        {
            max = v[i];
            imax = i;
        }
        if (v[i] < min)
        {
            min = v[i];
            imin = i;
        }
    }
    if (imin > imax)
    {
        int aux = imin;
        imin = imax;
        imax = aux;
    }
    for (int i = imin; i <= imax; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}