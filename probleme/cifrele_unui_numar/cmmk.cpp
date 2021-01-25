#include <iostream>

using namespace std;
int main()
{
    int n, k;
    bool adev = true;
    cin >> n >> k;
    while (n > 0)
    {
        int m = n % 10;
        if (m > k)
        {
            adev = false;
        }
        n /= 10;
    }
    if (adev)
    {
        cout << "DA"
             << "\n";
    }
    else
    {
        cout << "NU"
             << "\n";
    }
}