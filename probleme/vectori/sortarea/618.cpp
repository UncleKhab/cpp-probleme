#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], u[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        u[i] = v[i];
    }
    // --- Bubble Sort
    bool sortat = false;
    int m = n;
    while (!sortat)
    {
        sortat = true;
        int p = m;
        for (int i = 0; i < p - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                sortat = false;
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
                m = i + 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        bool gasit = false;
        for (int j = 0; j < n && !gasit; j++)
        {
            if (v[i] == u[j])
            {
                cout << j + 1 << " ";
                gasit = true;
            }
        }
    }
    cout << endl;
}