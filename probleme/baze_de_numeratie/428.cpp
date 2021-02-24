#include <iostream>

using namespace std;

int main()
{
    int b, n, m;
    cin >> b >> n;
    int rez = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        rez = rez * b + m;
    }
    cout << rez << endl;
}