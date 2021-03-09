#include <iostream>

using namespace std;
int gcd(int n, int m)
{
    if (m == 0)
    {
        return n;
    }
    else
    {
        return gcd(m, n % m);
    }
}
int main()
{
    int n;
    cin >> n;
    int v[n], counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int last = v[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        int min = v[i];
        int max = last;
        if (min > max)
        {
            int aux = min;
            min = max;
            max = aux;
        }
        if (gcd(max, min) == 1)
            counter++;
    }
    cout << counter << endl;
}