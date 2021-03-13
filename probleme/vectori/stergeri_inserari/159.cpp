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
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] % 2 == 0)
        {
            n++;
            for (int j = n; j > i; j--)
            {
                v[j] = v[j - 1];
            }
            v[i + 1] = v[i] * 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}