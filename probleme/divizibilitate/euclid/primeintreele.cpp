#include <iostream>

using namespace std;
int gcd(int n, int m)
{
    while (m != 0)
    {
        int r = n % m;
        n = m;
        m = r;
    }
    return n;
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
    if (gcd(a, b) == 1)
    {
        cout << "PIE" << endl;
    }
    else
    {
        cout << "NOPIE" << endl;
    }
}