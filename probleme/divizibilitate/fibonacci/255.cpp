#include <iostream>

using namespace std;

int main()
{
    int n = 1, m = 1;
    int count;
    cin >> count;
    if (count == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << n << " " << m << " ";
        count -= 2;
        while (count)
        {
            int p = n + m;
            cout << p << " ";
            n = m;
            m = p;
            count--;
        }
        cout << endl;
    }
}