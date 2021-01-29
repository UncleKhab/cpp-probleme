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
    int n;
    cin >> n;
    int aux = n,
        nr_cifre = 0,
        mij,
        a = 0,
        b = 0,
        ordin = 1;
    while (aux)
    {
        nr_cifre++;
        aux /= 10;
    }
    mij = nr_cifre / 2;
    for (int i = 0; i < mij; i++)
    {
        a += n % 10 * ordin;
        n /= 10;
        ordin *= 10;
    }
    if (nr_cifre % 2 != 0)
    {
        n /= 10;
    }
    ordin = 1;
    for (int i = 0; i < mij; i++)
    {
        b += n % 10 * ordin;
        n /= 10;
        ordin *= 10;
    }

    int min = a, max = b;
    if (a > b)
    {
        max = a;
        min = b;
    }

    cout << gcd(max, min) << endl;
}