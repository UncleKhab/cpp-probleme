#include <bits/stdc++.h>
using namespace std;

bool voc(char n)
{
    int m = (int)n;
    if (m == 97 || m == 101 || m == 105 || m == 111 || m == 117)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    char v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        char x = voc(v[i]);
        char z = v[i];
        int p = i - 1;
        if (x)
        {
            while (!voc(v[p]) && p >= 0)
            {
                v[p + 1] = v[p];
                p--;
            }
            v[p + 1] = z;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}