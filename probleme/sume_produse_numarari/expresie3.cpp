#include <iostream>

using namespace std;

int main()
{
    int n, s, m;
    s = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        m = n / 2;
        s = -2 * (m * (m + 1));
    }
    else
    {
        m = (n - 1) / 2;
        s = -2 * (m * (m + 1)) + n * (n + 1);
    }
    cout << "Rezultatul este " << s << endl;
}
// Explicatie
/*
    s2 = 1*2 - 2*3 = 2(1-3) = 2(-2)
    s4 = 1*2 - 2*3 + 3*4 - 4*5 = 2(-2) + 4(-2) = -2(2+4) = -4(1+2)
    s6 = -4(1+2+3)
    sn, n % 2 = -4(1+2+3+....+k) = -4(k(k+1) / 2) = -2(k(k+1))
    k = n/2
*/