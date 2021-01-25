#include <iostream>

using namespace std;

int main()
{
    int n, x, z;
    cin >> n;
    x = n;
    int counter = 0, sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    x = n;
    while (x > 0)
    {
        z = x % 10;
        if ((sum - z) % 3 == 0)
        {
            counter++;
        }
        x /= 10;
    }
    cout << counter << endl;
}