#include <iostream>

using namespace std;
int prim(int n)
{
    int d = 2;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int v[n], tmp;
    int c = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> tmp;
        if (prim(tmp) && tmp > 1)
        {
            v[c] = tmp;
            c++;
        }
    }
    // Sortare Crescatoare prin selectie;

    // for (int i = 0; i < c - 1; i++)
    // {
    //     for (int j = i + 1; j < c; j++)
    //     {
    //         if (v[i] > v[j])
    //         {
    //             int aux = v[i];
    //             v[i] = v[j];
    //             v[j] = aux;
    //         }
    //     }
    // }

    // Sortare prin insertie
    // for (int i = 0; i < c; i++)
    // {
    //     int x = v[i];
    //     int p = i - 1;
    //     while (v[p] > x && p >= 0)
    //     {
    //         v[p + 1] = v[p];
    //         p--;
    //     }
    //     v[p + 1] = x;
    // }

    // Sortare Bule

    bool sortat = false;
    while (!sortat)
    {
        sortat = true;
        for (int i = 0; i < c - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                sortat = false;
                int aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}