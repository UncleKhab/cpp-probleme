#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n, rad;
    cin >> n;
    rad = sqrt(n);
    if (n == (rad * rad))
        cout << "da" << endl;
    else
        cout << "nu" << endl;
}