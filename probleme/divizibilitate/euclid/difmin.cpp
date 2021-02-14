#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1, out_a, out_b, min = 1000000000;
    while (a * a < n)
    {
        if (n % a == 0)
        {
            int b = n / a;
            if (b - a < min)
            {
                min = b - a;
                out_a = a;
                out_b = b;
            }
        }
        a++;
    }
    if (a * a == n)
    {
        cout << a << " " << a << endl;
    }
    else
    {
        cout << out_a << " " << out_b << endl;
    }
}