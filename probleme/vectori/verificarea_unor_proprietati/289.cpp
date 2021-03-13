#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;

    bool exista = false;
    for (int i = 0; i < n && !exista; i++)
    {
        cin >> m;
        if (m % 2 != 0)
        {
            exista = true;
        }
    }
    if (exista)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}