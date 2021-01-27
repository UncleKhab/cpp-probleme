#include <iostream>
using namespace std;

int main()
{
    int n, k, prod = 1;
    bool cifre = false;
    cin >> n >> k;
    while (n)
    {
        int cifra = n % 10;
        if (cifra != k)
        {
            prod *= cifra;
            cifre = true;
        }
        n /= 10;
    }
    if (cifre)
    {
        cout << prod << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}