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
    int a = v[0], b = v[n - 1];
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    bool inchis = true;
    for (int i = 1; i < n - 1 && inchis; i++)
    {
        if (v[i] < a || v[i] > b)
            inchis = false;
    }
    if (inchis)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}