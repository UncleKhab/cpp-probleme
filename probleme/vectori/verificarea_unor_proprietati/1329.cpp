#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool zig_zag = true;

    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] > v[i + 1])
        {
            if (v[i + 1] > v[i + 2])
            {
                zig_zag = false;
            }
        }
        else
        {
            if (v[i] < v[i + 1])
            {
                if (v[i + 1] < v[i + 2])
                {
                    zig_zag = false;
                }
            }
        }
        if (v[i] == v[i + 1])
            zig_zag = false;
    }
    if (zig_zag)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}