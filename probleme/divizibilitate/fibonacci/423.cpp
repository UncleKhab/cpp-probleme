#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int n = 1, m = 1;
    cout << n << " " << m << " ";
    while (n + m <= x)
    {
        int p = n + m;
        cout << p << " ";
        n = m;
        m = p;
    }
    cout << endl;
}