#include <iostream>

using namespace std;

int main()
{
    int n, m;
    bool pp = false;
    cin >> n;
    m = 1;
    while (m * m <= n)
    {
        if (m * m == n)
        {
            pp = true;
        }
        m++;
    }
    if (pp)
    {
        cout << "da" << endl;
    }
    else
    {
        cout << "nu" << endl;
    }
}