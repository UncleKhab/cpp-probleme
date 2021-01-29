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
    int n, counter = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (gcd(i, j) == 1)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
}