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
    }
    for (int i = 0; i < n; i++)
    {
        cin >> u[i];
    }
    bool are = true;
    for (int i = 0; i < n; i++)
    {
        bool este_v = false;
        for (int j = 0; j < n; j++)
        {
            if (v[i] == u[j] && !este_v)
            {
                este_v = true;
                u[j] = -1;
            }
        }
        if (!este_v)
            are = false;
    }

    if (are)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}