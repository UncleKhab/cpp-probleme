#include <iostream>

using namespace std;

int main()
{
    int n, sum, m, x, p = 0;
    cin >> n;
    sum = n * (n + 1) / 2;
    if (sum % 3 == 0 && sum > 6)
    {
        m = sum / 3;
        x = sum - m;
        if (x > 0)
        {
            cout << n << " " << x << endl;
        }
        else
        {
            cout << n << endl;
        }
        p++;
        cout << sum << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}