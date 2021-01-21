#include <iostream>

using namespace std;

int main()
{
    unsigned long long c, p;
    cin >> c >> p;
    if (p % 2 == 0)
    {
        unsigned long long int r, cat;
        r = c % p;
        cat = c / p;
        cout << r + cat << endl;
    }
    else
    {
        cout << c % p << endl;
    }
}