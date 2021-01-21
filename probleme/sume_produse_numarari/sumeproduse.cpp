#include <iostream>

using namespace std;

int main()
{
    int n, m;
    long long int sum_left = 0, sum_right = 0, x;
    cin >> n;
    m = n / 2;

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        sum_left += x;
    }
    for (int i = m; i < n; i++)
    {
        cin >> x;
        sum_right += x;
    }

    cout << sum_left * sum_right << endl;
}