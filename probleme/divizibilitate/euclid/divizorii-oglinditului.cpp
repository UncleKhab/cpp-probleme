#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 0;
    int d = 1, counter = 0;
    while (n)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    while (d * d <= m)
    {
        if (d * d == m)
        {
            counter++;
        }
        else if (m % d == 0)
        {
            counter += 2;
        }
        d++;
    }
    cout << counter << endl;
}