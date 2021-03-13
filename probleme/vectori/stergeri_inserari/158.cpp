#include <iostream>

using namespace std;

int main()
{
    int n, x, p;
    cin >> n >> x >> p;
    int v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    n++;
    for (int i = n; i > p; i--)
    {
        v[i] = v[i - 1];
    }
    v[p] = x;
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}