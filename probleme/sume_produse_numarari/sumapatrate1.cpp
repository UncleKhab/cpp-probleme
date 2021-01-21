#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 1;
    int s = 0;
    while (m * m <= n)
    {
        s += m * m;
        m++;
    }
    cout << "Rezultatul este " << s << endl;
}