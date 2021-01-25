#include <iostream>

using namespace std;

int main()
{
    int n, c1, c2, m = 0, k, ordin = 1;
    cin >> n >> c1 >> c2;
    do
    {
        k = n % 10;
        if (k == c1)
        {
            m += c2 * ordin;
        }
        else
        {
            m += k * ordin;
        }
        ordin *= 10;
        n /= 10;
    } while (n > 0);
    cout << m << "\n";
}