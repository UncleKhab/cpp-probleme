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
    int sum_n = 0;
    int numi = 1;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int max = y, min = numi;
        if (numi > y)
        {
            max = numi;
            min = y;
        }
        int cmmmc = numi * y / gcd(max, min);
        x = cmmmc / y * x;

        sum_n = cmmmc / numi * sum_n;
        sum_n += x;
        numi = cmmmc;
    }
    int max = numi, min = sum_n;
    if (sum_n > numi)
    {
        max = sum_n;
        min = numi;
    }
    int s_gcd = gcd(max, min);
    numi = numi / s_gcd;
    sum_n = sum_n / s_gcd;

    cout << sum_n << " " << numi << endl;
}