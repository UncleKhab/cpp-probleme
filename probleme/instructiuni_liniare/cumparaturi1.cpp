#include <iostream>

using namespace std;

int main()
{
    int s, c, n;
    cin >> s >> c >> n;
    if (!(s % c) && !(s % n))
        cout << "CN" << endl;
    else if (!(s % c))
        cout << "C" << endl;
    else if (!(s % n))
        cout << "N" << endl;
    else
        cout << "nimic" << endl;
}