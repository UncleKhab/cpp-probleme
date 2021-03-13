#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n * 2];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
        if ((v[i] + v[i + 1]) % 2 == 0)
        {
            if (i != n - 1)
            {
                cout << (v[i] + v[i + 1]) / 2 << " ";
            }
        }
    }
    cout << endl;
}