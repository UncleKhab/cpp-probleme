#include <iostream>

using namespace std;

int rev(int n)
{
    int d = 0;
    while (n)
    {
        d = d * 10 + n % 10;
        n /= 10;
    }
    return d;
}
int main()
{
    int n, ogl;
    bool found = false;

    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ogl = rev(v[0]);
    for (int i = 1; i < n && !found; i++)
    {
        if (ogl == v[i])
            found = true;
    }
    if (found)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}