#include <bits/stdc++.h>

using namespace std;

ifstream fin("paresort.in");
ofstream fout("paresort.out");

int main()
{
    int n, cnt = 0;
    fin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        int tmp;
        fin >> tmp;
        if (tmp % 2 == 0 && tmp > 0)
        {
            v[cnt] = tmp;
            cnt++;
        }
    }
    if (cnt == 0)
    {
        fout << "nu exista";
    }
    else
    {
        for (int i = 1; i < cnt; i++)
        {
            int x = v[i];
            int p = i - 1;
            while (x < v[p] && p >= 0)
            {
                v[p + 1] = v[p];
                p--;
            }
            v[p + 1] = x;
        }
        fout << cnt << "\n";
        for (int i = 0; i < cnt; i++)
        {
            fout << v[i] << " ";
        }
    }
}