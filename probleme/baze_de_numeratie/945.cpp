#include <iostream>

using namespace std;

int main()
{
    int n, b, c;
    cin >> n >> b >> c;
    int cif_n[100];
    int i = 0;
    int aux = 0;
    while (n)
    {
        cif_n[i] = n % 10;
        i++;
        n /= 10;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        aux = aux * b + cif_n[j];
    }
    i = 0;
    while (aux)
    {
        cif_n[i] = aux % c;
        aux /= c;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << cif_n[j];
    }
    cout << endl;
}