#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= k; i++)
    {
        bool sortat = false;
        while (!sortat)
        {
            sortat = true;
            for (int j = 0; i + (j + 1) * k <= n; j++)
            {
                int a = i + j * k;
                int b = i + (j + 1) * k;
                if (v[a] > v[b])
                {
                    sortat = false;
                    swap(v[a], v[b]);
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
}