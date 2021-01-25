#include <iostream>

using namespace std;

int main()
{
    int n, m, max_par = 0, min_impar = 1000000001, y = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (i % 2 == 0 && m > max_par)
        {
            max_par = m;
        }

        if (i % 2 != 0 && 10 <= m && m <= 99 && m < min_impar)
        {
            min_impar = m;
            y = i;
        }
    }
    if (y < 0)
    {
        min_impar = -1;
    }
    cout << max_par << " " << min_impar << endl;
}