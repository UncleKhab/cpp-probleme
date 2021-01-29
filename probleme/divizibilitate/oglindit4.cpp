#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    else
    {
        return gcd(m, n % m);
    }
}
int rastoarna(int n)
{
    int m = 0;
    while (n > 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int main()
{
    int n, o, counter = 0;
    cin >> o;
    for (int i = 0; i < o; i++)
    {
        cin >> n;
        int m = rastoarna(n);
        int min = m, max = n;

        if (m > n)
        {
            min = n;
            max = m;
        }
        if (gcd(max, min) == 1)
        {
            counter++;
        }
    }

    cout << counter << endl;
}