#include <iostream>

using namespace std;

int main()
{
    long int s, d, r, m;
    cin >> s >> d >> r >> m;
    long int max = 0;
    if (d > max && d <= s)
        max = d;
    if (r > max && r <= s)
        max = r;
    if (m > max && m <= s)
        max = m;

    if (max == d)
        cout << "drona" << endl;
    else if (max == r)
        cout << "robot" << endl;
    else if (max == m)
        cout << "masina" << endl;
    else
        cout << "nimic" << endl;
}