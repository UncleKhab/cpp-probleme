#include <iostream>

using namespace std;

int main()
{
    int n, x, y, min = 1000, pos = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        int curr_min = abs(x - y);
        if (curr_min <= min)
        {
            min = curr_min;
            pos = i;
        }
    }
    cout << pos << endl;
}