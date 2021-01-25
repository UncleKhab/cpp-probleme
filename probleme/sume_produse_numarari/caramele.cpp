#include <iostream>

using namespace std;

int main()
{
    long long c, p, sum_p, rest_c;
    cin >> c >> p;
    sum_p = p * (p + 1) / 2;
    rest_c = c - sum_p;
    rest_c = rest_c - rest_c / p * p;
    if (rest_c > 0)
    {
        cout << rest_c << endl;
    }
    else
    {
        cout << c << endl;
    }
}