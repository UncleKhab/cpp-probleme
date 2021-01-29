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
    int n, m;
    cin >> n;
    int cmmdc;
    cin >> cmmdc;
    for (int i = 1; i < n; i++)
    {
        cin >> m;
        int min = cmmdc,
            max = m;
        if (cmmdc > m)
        {
            min = m;
            max = cmmdc;
        }
        cmmdc = gcd(max, min);
    }
    cout << cmmdc << endl;
}