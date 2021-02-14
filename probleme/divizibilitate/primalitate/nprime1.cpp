#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        int d = 1, sum = 0;
        while (d * d <= i)
        {
            if (i % d == 0)
            {
                sum += d + i / d;
            }
            d++;
        }
        if (i + 1 == sum)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}