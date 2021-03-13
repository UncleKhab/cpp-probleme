#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool posibil = true;
    int v[1000001];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    while (posibil)
    {
        posibil = false;
        // verificam fiecare termen cu urmatorul pana la n-1 (penultimul termen)
        // penultimul pentru ca il comparam cu ultimul!!!!!
        for (int i = 0; i < n - 1; i++)
        {
            // Daca cei 2 termeni au aceeasi paritate si ei sunt diferiti
            if ((v[i] + v[i + 1]) % 2 == 0 && v[i] != v[i + 1])
            {
                //calculam media lor
                int med = (v[i] + v[i + 1]) / 2;
                // luam de la ultimul termen+1 (n) , in ordine inversa
                // inlocui toti termenii spre dreapta , ultimul devine penultimul, penultimul devine raspenultimul s.a.m.d
                // pana ajungem la termenul i+1 (care acum este mutat pe i+2)
                for (int j = n; j > i; j--)
                {
                    v[j] = v[j - 1];
                }
                // validam gasirea termenului
                posibil = true;
                // in locuim i+1 cu media
                v[i + 1] = med;
                // crestem marimea logica a vectorului
                n++;
                // sarim peste termenul recent adaugat.
                i++;
            }
        }
        if (posibil)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}