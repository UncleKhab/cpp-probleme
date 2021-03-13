#include <iostream>

using namespace std;
int gcd(int n, int m)
{
    if (m > n)
    {
        int aux = m;
        m = n;
        n = aux;
    }
    if (m == 0)
    {
        return n;
    }
    else
    {
        return gcd(m, n % m);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    int max_a = 0, max_b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max_a)
            max_a = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > max_b)
            max_b = b[i];
    }
    // Descoperim care sunt valorile fractiei dorite
    int gc = gcd(max_a, max_b);
    int fb = max_b / gc;
    int fa = max_a / gc;
    // Verificam daca fiecare numar poate ajunge la valorile fractiei dorite
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[j] != -1)
            {
                gc = gcd(a[i], b[j]);
                int faa = a[i] / gc;
                int fbb = b[j] / gc;
                if (faa == fa && fbb == fb)
                {
                    b[j] = -1;
                    counter++;
                }
            }
        }
    }
    if (counter == n)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}