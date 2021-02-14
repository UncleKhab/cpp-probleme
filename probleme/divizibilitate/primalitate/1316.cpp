#include <iostream>
#include <math.h>

using namespace std;
int prim(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    int i = 2, d = 0;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            d++;
        }
        i++;
    }
    if (!d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int aproape_prim(int n)
{
    int div = 0, d = 1;
    while (d * d <= n)
    {
        if (n == d * (n / d))
        {
            div += 2;
        }
        if (d * d == n)
        {
            div--;
        }
        d++;
    }
    if (div == 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int patrat_prim(int n)
{
    int d = sqrt(n);
    if (d * d == n && prim(d))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    if (prim(n))
    {
        cout << "prim" << endl;
    }
    else if (patrat_prim(n))
    {
        cout << "patrat prim" << endl;
    }
    else if (aproape_prim(n))
    {
        cout << "aproape prim" << endl;
    }
    else
    {
        cout << "compus" << endl;
    }
}