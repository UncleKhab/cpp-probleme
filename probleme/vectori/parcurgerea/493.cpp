#include <iostream>

using namespace std;

int suma_cif(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int sumx = suma_cif(x);
        v[i] = x % sumx;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}