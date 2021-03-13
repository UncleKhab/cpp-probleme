#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    bool palindrom = true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mij = n / 2;
    for (int i = 0; i < mij && palindrom; i++)
    {
        if (v[i] != v[n - i - 1])
            palindrom = false;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    cout << endl;
    if (palindrom)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}