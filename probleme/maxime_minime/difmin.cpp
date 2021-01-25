#include <iostream>

using namespace std;

int main()
{
    int n, x, y, prev, m, min_sum, min_diff;
    cin >> n;
    n -= 2;
    cin >> x >> y;
    min_diff = abs(x - y);
    min_sum = x + y;
    prev = y;
    for (int i = 0; i < n; i++)
    {
        int current_diff;
        cin >> m;
        current_diff = abs(m - prev);
        if (current_diff < min_diff)
        {
            min_diff = current_diff;
            min_sum = prev + m;
            x = prev;
            y = m;
        }
        if (current_diff == min_diff && prev + m < min_sum)
        {
            min_sum = prev + m;
            x = prev;
            y = m;
        }
        prev = m;
    }

    cout << x << " " << y << endl;
}