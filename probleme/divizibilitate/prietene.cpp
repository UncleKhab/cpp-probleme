#include <iostream>

using namespace std;

int det_div(int a)
{
    int div = 1,
        sum = 0;
    while (div * div < a)
    {
        if (div == 1)
        {
            sum += 1;
        }
        else if (a % div == 0)
        {
            int p = a / div;
            sum += div + p;
        }
        div++;
    }
    if (div * div == a)
    {
        sum += div;
    }
    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int sum_a = det_div(a);
    int sum_b = det_div(b);
    if (sum_a == b && sum_b == a)
    {
        cout << "PRIETENE" << endl;
    }
    else
    {
        cout << "NU SUNT PRIETENE" << endl;
    }
}