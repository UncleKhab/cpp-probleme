#include <iostream>

using namespace std;

int main()
{
    int n, sum_p = 0, counter = 0, m;
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
            sum_p += m;
            counter++;
        }
    }
    float media = sum_p / (counter * 1.0);
    media = (int)(media * 100) / 100.0;
    cout << media << endl;
}