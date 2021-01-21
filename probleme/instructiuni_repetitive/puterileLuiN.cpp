#include <iostream>
using namespace std;

int main()
{
    int x;
    long n, p;
    cin >> n >> p;
    for (long int i = 1; i <= p; i *= n)
    {
        cout << i << " ";
    }
}