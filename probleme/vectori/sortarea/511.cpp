#include <iostream>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // sortare selectie
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for (int i = k; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}