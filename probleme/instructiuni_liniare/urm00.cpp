#include <iostream>
using namespace std;

int main()
{
    int n, ultimele_cifre;
    cin >> n;
    ultimele_cifre = n % 100;
    if (ultimele_cifre != 0)
        ultimele_cifre = 100 - ultimele_cifre;
    n = n + ultimele_cifre;
    cout << n << endl;
}