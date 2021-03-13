#include <iostream>

using namespace std;

bool prim(long long m)
{
    if (m <= 1)
        return false;
    long long d = 2;
    int count = 0;
    while (d * d <= m)
    {
        if (m % d == 0)
        {
            return false;
        }
        d++;
    }

    return true;
}
int main()
{
    int n;
    cin >> n;
    long long v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (prim(v[i]))
        {
            for (int j = i; j < n; j++)
            {
                v[j] = v[j + 1];
            }
            n--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}