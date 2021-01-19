#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a < 0 && b < 0) || (a > 0 && b > 0))
        cout << "da" << endl;
    else
        cout << "nu" << endl;
}