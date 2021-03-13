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
    bool toate = true;
    for (int i = 0; i < n && toate; i++)
    {
        if (v[i] % 2 != 0)
            toate = false;
    }
    if (toate)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }
}