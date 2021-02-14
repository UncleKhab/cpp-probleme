#include <iostream>

using namespace std;
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
int main()
{
    int n, m, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (aproape_prim(m))
            counter++;
    }
    cout << counter << endl;
}