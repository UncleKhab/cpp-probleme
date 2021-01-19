#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n / 100) == ((n % 100) / 10) && (n / 100) == (n % 10))
        cout << "da" << endl;
    else
        cout << "nu" << endl;
}