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
    bool perm = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > n)
        {
            perm = false;
        }
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] == v[j])
                    perm = false;
            }
        }
    }
    if (perm)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}