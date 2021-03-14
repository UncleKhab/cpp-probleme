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

    // Sortare Insertie Crescator
    for (int i = 1; i < n; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (v[p] > x && p >= 0)
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}