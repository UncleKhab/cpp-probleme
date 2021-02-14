#include <iostream>
#include <algorithm>
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
    int n, max_d = 0, curent = 0, prev;
    cin >> prev;
    do
    {
        cin >> n;
        int min = n, max = prev;
        if (n > prev)
        {
            min = prev;
            max = n;
        }
        if (gcd(min, max) == 1)
        {
            curent++;
        }
        else
        {
            if (curent > max_d)
            {
                max_d = curent;
            }
        }
        prev = n;
    } while (n);

    cout << max_d << endl;
}