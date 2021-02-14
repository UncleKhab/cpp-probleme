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
int main()
{
    int n, m, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (prim(m))
        {
            while (m > 0)
            {
                counter++;
                m /= 10;
            }
        }
    }
    cout << counter << endl;
}