#include <iostream>

using namespace std;
long long gcd(long long n, long long m)
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
    long long n, m;
    cin >> n >> m;
    if (m > n)
    {
        long long aux = n;
        n = m;
        m = aux;
    }
    long long D = gcd(n, m);
    long long M = (n * m) / D;
    cout << D << " " << M << endl;
}