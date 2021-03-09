#include <iostream>

using namespace std;

int gcd(int n, int m)
{
    if (m == 0)
        return n;
    else
    {
        return gcd(m, n % m);
    }
}
int main()
{
    int counter = 0;
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        int min = v[i];
        int max = v[n - i - 1];
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