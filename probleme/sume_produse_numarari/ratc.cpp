#include <iostream>

using namespace std;

int main()
{
    int n, x, y, p;
    int sumx = 0, sumy = 0;
    cin >> n >> x >> y >> p;
    if (p == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            sumx += x;
            sumy += y;
        }
        cout << sumx << " " << sumy << " " << sumx - sumy << "\n";
    }
    else
    {
        int a, b;
        for (int i = 0; i < x - 1; i++)
        {
            cin >> a >> b;
            sumx += a - b;
        }
        if (sumx >= y)
        {
            cout << "DA"
                 << "\n";
        }
        else
        {
            cout << "NU"
                 << "\n";
        }
    }
}