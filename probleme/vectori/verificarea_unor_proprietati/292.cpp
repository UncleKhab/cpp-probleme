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
    int a = v[n - 1];
    bool mult = true;
    for (int i = 0; i < n - 1 && mult; i++)
    {
        if (v[i] % a != 0)
            mult = false;
    }
    if (mult)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}