#include <iostream>

using namespace std;

int main()
{
    int n, m, min = 1000000001, max = 0, counter = 0;
    ;
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
            if (m < min)
                min = m;
            if (m > max)
                max = m;
            counter++;
        }
    }
    cout << counter << " " << min << " " << max << endl;
}