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
    bool sortat = false;
    int m = n;
    while (!sortat)
    {
        int p = m;
        sortat = true;
        for (int i = 0; i < p - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                swap(v[i], v[i + 1]);
                m = i + 1;
                sortat = false;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}