#include <iostream>
#include <math.h>

using namespace std;
int prim(int m)
{
    if (m == 0 || m == 1)
    {
        return 0;
    }
    else
    {
        int d = 2, i = 0;
        while (d * d <= m)
        {
            if (m % d == 0)
                i++;
            d++;
        }
        if (!i)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    int i = sqrt(a), counter = 0;
    if (i * i < a)
    {
        i++;
    }
    while (i * i <= b)
    {
        if (prim(i))
            counter++;
        i++;
    }
    cout << counter << endl;
}