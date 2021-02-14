#include <iostream>

using namespace std;

int main()
{
    int n, m;
    long long int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int aux = 0,
            div = 1;
        while (m > 0)
        {
            aux = (aux * 10) + (m % 10);
            m /= 10;
        }
        while (div * div < aux)
        {
            if (aux % div == 0)
            {
                int p = aux / div;
                sum += div + p;
            }
            div++;
        }
        if (div * div == aux)
        {
            sum += div;
        }
    }
    cout << sum << endl;
}