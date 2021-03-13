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
    bool diferite = true;
    for (int i = 0; i < n - 1 && diferite; i++)
    {
        for (int j = i + 1; j < n && diferite; j++)
        {
            if (v[i] == v[j])
                diferite = false;
        }
    }
    if (diferite)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}