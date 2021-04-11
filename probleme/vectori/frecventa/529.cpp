#include <bits/stdc++.h>
using namespace std;
int v[10];
void cifre(int x)
{
    while (x > 0)
    {
        int cif = x % 10;
        x /= 10;
        v[cif]++;
    }
}
int main()
{

    int n, tmp, min = 1000000000, indx = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        cifre(tmp);
    }
    int gasit = true;
    while (gasit)
    {
        gasit = false;
        for (int i = 0; i < 10; i++)
        {
            if (v[i] < min && v[i] != 0)
            {
                indx = i;
                min = v[i];
                gasit = true;
            }
        }
        if (gasit)
        {
            cout << indx << " ";
            v[indx] = 0;
            min = 1000000000;
        }
    }
}