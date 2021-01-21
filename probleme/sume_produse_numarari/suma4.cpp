#include <iostream>

using namespace std;

int main()
{
    int n, s;
    s = 0;
    cin >> n;
    n = n % 100;
    for (int i = 1; i <= n; i++)
    {
        s = (s + (i * i * i * i)) % 10;
    }
    cout << s << endl;
}