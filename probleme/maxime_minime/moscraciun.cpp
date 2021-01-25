#include <iostream>

using namespace std;

int main()
{
    int n, max = 0, m, count = 0;
    cin >> n;
    n = n / 2;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > max)
            max = m;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m > max)
            count++;
        }
    cout << count << endl;
}