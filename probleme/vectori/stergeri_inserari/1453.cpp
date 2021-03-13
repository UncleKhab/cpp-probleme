#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long v[n];
    // --------------------------------------------- VARIANTA LAZY
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    //     if (v[i] % 2 == 0)
    //     {
    //         i--;
    //         n--;
    //     }
    // }

    // -------------------------------------------- VARIANTA WORKED
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] % 2 == 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                v[j] = v[j + 1];
            }
            n--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}