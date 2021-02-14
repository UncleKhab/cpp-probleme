#include <iostream>

using namespace std;

int main()
{
    int n, m, counter = 0, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int d = 1, sum = 0;
        while (d * d <= m)
        {
            if (m % d == 0)
            {
                sum += d + m / d;
            }
            d++;
        }
        if (m + 1 == sum && m > 1)
        {
            if (m == max)
            {
                counter++;
            }
            if (m > max)
            {
                counter = 1;
                max = m;
            }
                }
    }
    cout << max << " " << counter << endl;
}