#include <fstream>
#include <bits/stdc++.h>

using namespace std;
ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");
int main()
{
    int n;
    fin >> n;
    int v[n + 1];
    v[0] = 0;
    v[n + 1] = 0;
    for (int i = 1; i <= n; i++)
    {
        fin >> v[i];
    }
    std::sort(v + 1, v + n + 1);

    for (int i = n; i > 0; i--)
    {
        fout << v[i] << " ";
    }
    fout << endl;
    for (int i = n; i > 0; i--)
    {
        if (v[i] * 2 == v[i - 1] + v[i + 1])
            fout << 1 << " ";
        else
            fout << 0 << " ";
    }
}