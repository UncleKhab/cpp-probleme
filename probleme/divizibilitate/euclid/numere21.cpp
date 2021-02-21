#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    if (m > n)
    {
        int aux = m;
        m = n;
        n = aux;
    }
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
    long long sum = 0;
    do
    {
        cin >> n >> m;
        int ogln = 0, oglm = 0;
        int aux = n;
        while (aux)
        {
            ogln = ogln * 10 + aux % 10;
            aux /= 10;
        }
        aux = m;
        while (aux)
        {
            oglm = oglm * 10 + aux % 10;
            aux /= 10;
        }

        if (gcd(n, m) == 1 && gcd(ogln, oglm) == 1)
            sum += n + m;
    } while (m != 0 && n != 0);
    cout << sum << endl;
}