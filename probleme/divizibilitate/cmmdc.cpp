#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (n == 0 && m == 0)
    {
        return -1;
    }
    else
    {
        while (m != 0)
        {
            int r = n % m;
            n = m;
            m = r;
        }
        return n;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    int cm = gcd(a, b);
    cout << cm << endl;
}