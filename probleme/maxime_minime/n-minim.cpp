#include <iostream>

using namespace std;

int main()
{
    int n;
    int m, min = 1000000000;
    cin >> n;
    while (n > 0)
    {
        cin >> m;
        if (m < min)
        {
            min = m;
        }
        n--;
    }
    cout << min << "\n";
}