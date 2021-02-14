#include <iostream>

using namespace std;

int prim(int n)
{
    if (n == 0 || n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int aproape_prim(long int n)
{

    int counter = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && prim(i))
        {
            int p = n / i;
            if (prim(p))
                counter++;
            if (n == i * i)
                counter--;
        }
    }
    if (counter > 0)
        return 1;
    return 0;
}
int main()
{
    long int n, m, max = -1, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (aproape_prim(m))
        {
            if (m > max)
            {
                max = m;
                counter = 1;
            }
            else if (m == max)
            {
                counter++;
                max = m;
            }
        }
    }
    cout << max << " " << counter << endl;
}