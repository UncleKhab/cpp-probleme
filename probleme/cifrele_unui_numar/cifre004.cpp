#include <iostream>

using namespace std;

int main()
{
    int n, digit_sum = 0, sum;
    cin >> n;
    while (n > 0)
    {
        digit_sum += n % 10;
        n /= 10;
    }
    sum = digit_sum;
    for (int i = 0; i < digit_sum; i++)
    {
        if (sum > 9)
        {
            cout << 9;
            sum -= 9;
        }
        else if (sum != 0)
        {
            cout << sum;
            sum = 0;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
}