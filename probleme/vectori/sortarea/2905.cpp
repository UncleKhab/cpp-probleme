#include <bits/stdc++.h>

using namespace std;

ifstream fin("divizori4.in");
ofstream fout("divizori4.out");

int ndiv(int x)
{
    int exp = 0;
    while (x % 2 == 0)
    {
        exp++;
        x /= 2;
    }
    int nr_div = exp + 1;
    int d = 3;
    while (d * d <= x)
    {
        exp = 0;
        while (x % d == 0)
        {
            exp++;
            x /= d;
        }
        nr_div *= (exp + 1);
        d += 2;
    }
    if (x != 1)
        nr_div *= 2;

    return nr_div;
}
int main()
{
    int n, p, c;
    fin >> n >> c;
    int v[n], div[n];
    for (int i = 0; i < n; i++)
    {
        fin >> v[i];
        div[i] = ndiv(v[i]);
    }
    fin >> p;
    if (c == 1)
    {
        fout << div[p - 1] << "\n";
    }
    else
    {
        int a[n];
        int b = div[p - 1];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (div[i] == b)
            {
                a[cnt] = v[i];
                cnt++;
            }
        }
        bool sortat = false;
        int m = cnt - 1;
        while (!sortat)
        {
            int p = m;
            sortat = true;
            for (int i = 0; i < p; i++)
            {
                if (a[i] < a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                    sortat = false;
                    m = i;
                }
            }
        }

        for (int i = 0; i < cnt; i++)
        {
            fout << a[i] << " ";
        }
    }
}