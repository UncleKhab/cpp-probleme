#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << v[i] << " " << v[n - i - 1] << " ";
        }
    }
    else
    {
        for (int i = 0; i <= n / 2; i++)
        {
            if (i == n / 2 && n % 2 != 0)
            {
                cout << v[i] << " ";
            }
            else
            {
                cout << v[i] << " " << v[n - i - 1] << " ";
            }
        }
    }
}