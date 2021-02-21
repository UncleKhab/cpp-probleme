#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> a >> b >> n;
    if (abs(a + b) < n)
    {
        cout << a << " " << b << " ";
    }
    while (abs(a + b) < n)
    {
        int p = a + b;
        cout << p << " ";
        a = b;
        b = p;
    }
    cout << endl;
}