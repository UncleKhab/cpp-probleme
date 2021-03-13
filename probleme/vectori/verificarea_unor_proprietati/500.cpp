#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    bool ord = true;
    for (int i = 0; i < n && ord; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1 && ord; i++)
    {
        if (v[i] > v[i + 1])
            ord = false;
    }
    if (ord)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}