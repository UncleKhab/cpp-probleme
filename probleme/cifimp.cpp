#include <iostream>
using namespace std;

int main()
{
    int n, n1, n2, n3, imp;
    imp = 0;
    cin >> n;
    n1 = n % 10;
    n2 = (n % 100) / 10;
    n3 = n / 100;
    if (n1 % 2 != 0)
    {
        imp++;
    }
    if (n2 % 2 != 0)
    {
        imp++;
    }
    if (n3 % 2 != 0)
    {
        imp++;
    }
    cout << imp << endl;
}