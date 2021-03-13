#include <iostream>

using namespace std;

bool prim(int n)
{
    int d = 2;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int v[n];
    bool exista = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n && !exista; i++)
    {
        if (prim(v[i]))
            exista = true;
    }
    if (exista)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}