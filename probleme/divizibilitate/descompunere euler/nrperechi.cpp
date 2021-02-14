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
int nr_divizori(int n)
{
}
// cmmmc = a * b / d;
int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        cin >> x;
    }
}