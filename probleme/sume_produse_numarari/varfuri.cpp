#include <iostream>
using namespace std;

int main()
{
    int n, l, c, r, s = 0;
    cin >> n;
    if (n >= 3)
    {
        cin >> l >> c;
        n = n - 3;
        while (n >= 0)
        {
            cin >> r;
            if (l < c && c > r)
            {
                s += c;
            }
            l = c;
            c = r;
            n--;
        }

        cout << s << "\n";
    }
    else
    {
        cout << 0 << endl;
    }
}