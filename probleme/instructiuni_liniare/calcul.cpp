#include <iostream>

using namespace std;

int main()
{
    int n, n1, n2;
    cin >> n;
    if (n <= 15)
        cout << n * n << endl;
    else
    {
        n1 = n / 10;
        n2 = n % 10;
        if (n <= 30)
            cout << n1 + n2 << endl;
        else
            cout << n1 * n2 << endl;
    }
}