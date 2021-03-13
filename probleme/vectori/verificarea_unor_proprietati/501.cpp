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
    bool egale = true;
    int a = v[0];
    for (int i = 1; i < n && egale; i++)
    {
        if (v[i] != a)
            egale = false;
    }
    if (egale)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}