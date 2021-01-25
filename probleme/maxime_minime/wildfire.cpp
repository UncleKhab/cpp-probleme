#include <iostream>

using namespace std;

int main()
{
    int x, y, n, m;
    cin >> x >> y >> n >> m;
    int day_x, day_y;
    int n_mid = n - x;
    int m_mid = m - y;
    if (x > n_mid)
    {
        n_mid = x - 1;
    }
    if (y > m_mid)
    {
        m_mid = y - 1;
    }

    cout << n_mid + m_mid + 1 << endl;
}