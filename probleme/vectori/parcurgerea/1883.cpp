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
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        if (i == n - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (!found && v[j] > v[i])
                {
                    found = true;
                    cout << v[j] << " ";
                }
            }
            if (!found)
            {
                cout << -1 << " ";
            }
        }
    }
}