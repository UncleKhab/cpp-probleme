#include <iostream>

using namespace std;
int get_one(int n)
{
    int cif = 0;
    while (n)
    {
        if (n % 2 == 1)
        {
            cif++;
        }
        n /= 2;
    }
    return cif;
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (get_one(n) > get_one(m))
    {
        cout << n << endl;
    }
    else if (get_one(n) < get_one(m))
    {
        cout << m << endl;
    }
    else
    {
        if (n < m)
        {
            cout << n << endl;
        }
        else
        {
            cout << m << endl;
        }
    }
}