#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    int max = 0, min = 1000001, imin, imax;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            imax = i;
        }
        if (x < min)
        {
            min = x;
            imin = i;
        }
    }
    cout << imin << " " << imax << endl;
}