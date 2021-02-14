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
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int aproape_prim(int n)
{
    int counter = 0;
    for (int i = 1; i * i < n; i++)
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
    int n;
    cin >> n;
    if (aproape_prim(n))
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}