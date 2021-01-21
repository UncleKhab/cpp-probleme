#include <iostream>

using namespace std;

int main()
{
    int n, a, p;
    p = 1;
    cin >> n >> a;
    for (int i = 0; i < a; i++)
    {
        p *= 10;
    }
    cout << n * p << endl;
}