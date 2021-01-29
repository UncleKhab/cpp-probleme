#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (n == m)
    {
        return n;
    }
    else
    {
        return gcd(m, abs(n - m));
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);
}