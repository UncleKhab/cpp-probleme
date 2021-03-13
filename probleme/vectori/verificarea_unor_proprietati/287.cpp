#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int v[m];
        bool ord = true;
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
        }
        for (int j = 0; j < m - 1 && ord; j++)
        {
            if (v[j] > v[j + 1])
                ord = false;
        }
        if (ord)
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
