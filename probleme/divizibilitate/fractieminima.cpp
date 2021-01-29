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
int main()
{
    int n;
    cin >> n;
    long int m;
    int min = 2000000001;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > max)
        {
            max = m;
        }
        if (m < min)
        {
            min = m;
        }
    }
    int d = gcd(max, min);
    min = min / d;
    max = max / d;
    cout << min << "/" << max << endl;
}