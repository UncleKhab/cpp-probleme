#include <bits/stdc++.h>

using namespace std;
int prima_cifra(int n)
{
    int a[10];
    int counter = 0;
    while (n)
    {
        a[counter] = n % 10;
        counter++;
        n /= 10;
    }
    counter--;
    return (a[counter]);
}
int main()
{
    int n;
    cin >> n;
    int tmp;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v[i] = prima_cifra(tmp);
    }

    // insertion sort
    for (int i = 1; i < n; i++)
    {
        int x = v[i];
        int p = i - 1;
        while (x < v[p])
        {
            v[p + 1] = v[p];
            p--;
        }
        v[p + 1] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
}