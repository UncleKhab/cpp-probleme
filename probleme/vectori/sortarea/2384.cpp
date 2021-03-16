#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("divigrup.in");
ofstream cout("divigrup.out");

int cati_divizori(int n)
{
    int divs = 0;
    int exp = 0;
    while (n % 2 == 0)
    {
        exp++;
        n /= 2;
    }
    divs = exp + 1;

    int d = 3;

    while (d * d <= n)
    {
        exp = 0;
        while (n % d == 0)
        {
            exp++;
            n /= d;
        }
        divs *= (exp + 1);
        d += 2;
    }
    if (n != 1)
    {
        divs *= 2;
    }
    return divs;
}

int main()
{
    int n;
    cin >> n;
    int v[n], div[n], nr_divizori_diferiti = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        bool gasit = false;
        div[i] = cati_divizori(v[i]);
        for (int j = 0; j < i; j++)
        {

            if (div[i] == div[j])
            {
                gasit = true;
            }
        }
        if (!gasit)
            nr_divizori_diferiti++;
    }

    // Selection Sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (div[i] < div[j])
            {
                swap(div[i], div[j]);
                swap(v[i], v[j]);
            }
            else if (div[i] == div[j])
            {
                if (v[i] > v[j])
                {
                    swap(v[i], v[j]);
                    swap(div[i], div[j]);
                }
            }
        }
    }

    cout << nr_divizori_diferiti << endl;
    int prev = div[0];
    int counter = 1;
    int prev_poz = 0;
    for (int i = 1; i < n; i++)
    {
        if (div[i] == prev)
        {
            counter++;
        }
        else
        {

            cout << counter << " ";
            for (int j = prev_poz; j < prev_poz + counter; j++)
            {
                cout << v[j] << " ";
            }
            prev = div[i];
            prev_poz += counter;
            counter = 1;
            cout << endl;
        }
        if (i == n - 1)
        {
            cout << counter << " ";
            for (int j = prev_poz; j < prev_poz + counter; j++)
            {
                cout << v[j] << " ";
            }
        }
    }
}
