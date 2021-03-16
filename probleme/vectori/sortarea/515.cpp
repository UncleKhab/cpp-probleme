#include <bits/stdc++.h>

using namespace std;

int suma_divizorilor(int n)
{
    int sum = 0;
    int d = 1;
    while (d * d < n)
    {
        if (n % d == 0)
        {
            sum += d + (n / d);
        }
        d++;
    }
    if (d * d == n)
    {
        sum += d;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int v[n], div[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        div[i] = suma_divizorilor(v[i]);
    }
    bool sorted = false;
    int m = n;
    while (!sorted)
    {
        int p = m;
        sorted = true;
        for (int i = 0; i < p - 1; i++)
        {
            if (div[i] > div[i + 1])
            {
                swap(div[i], div[i + 1]);
                swap(v[i], v[i + 1]);
                sorted = false;
                m = i + 1;
            }
            else if (div[i] == div[i + 1])
            {
                if (v[i] > v[i + 1])
                {
                    swap(div[i], div[i + 1]);
                    swap(v[i], v[i + 1]);
                    sorted = false;
                    m = i + 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}