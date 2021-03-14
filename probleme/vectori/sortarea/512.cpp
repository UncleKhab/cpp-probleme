#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n], max = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > max)
        {
            max = v[i];
            index = i;
        }
    }

    for (int i = 1; i < index; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (x < v[p] && p >= 0)
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
    }

    for (int i = index + 1; i < n; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (x > v[p] && p >= index)
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
}