#include <iostream>

using namespace std;

int main()
{
    int a, b, counter = 0;
    cin >> a >> b;
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    for (int i = a; i <= b; i++)
    {
        int d = 1, sum = 0;
        while (d * d <= i)
        {
            if (i % d == 0)
            {
                sum += i / d + d;
            }
            d++;
        }
        if (i + 1 == sum && i > 1)
        {
            counter++;
        }
    }
    cout << counter << endl;
}