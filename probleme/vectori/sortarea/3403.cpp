#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("produse.in");
ofstream cout("produse.out");
int prim_cif(int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}
int sec_cif(int n)
{
    while (n >= 100)
    {
        n /= 10;
    }
    return n % 10;
}
int main()
{
    int n, c;
    cin >> c >> n;
    int v[n];
    if (c == 1)
    {
        int tmp;
        int stock = 0, out = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (sec_cif(tmp) % 2 == 0)
                stock++;
            else
                out++;
        }
        cout << stock << " " << out << endl;
    }

    if (c == 2)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 1; i <= 9; i++)
        {
            int counter = 0;
            int aux[1001];
            for (int j = 0; j < n; j++)
            {
                if (prim_cif(v[j]) == i)
                {
                    aux[counter] = v[j];
                    counter++;
                }
            }
            if (counter > 0)
            {
                sort(aux, aux + counter);
                cout
                    << i << " ";
                for (int k = 0; k < counter; k++)
                {
                    cout << aux[k] << " ";
                }
                cout << endl;
            }
        }
    }
}