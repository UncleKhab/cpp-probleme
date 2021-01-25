#include <iostream>

using namespace std;

int main()
{
    int n;
    long int m, x = -2000000000, y = x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > x)
        {
            y = x;
            x = m;
        }
        else if (m > y)
        {
            y = m;
        }
    }
    cout << x << " " << y << "\n";
}