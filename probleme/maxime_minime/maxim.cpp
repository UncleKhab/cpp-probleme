#include <iostream>

using namespace std;

int main()
{
    int max = -1000000, n;
    cin >> n;
    if (n != 0)
    {
        while (n != 0)
        {
            if (n > max)
            {
                max = n;
            }
            cin >> n;
        }
        cout << max << endl;
    }
    else
    {
        cout << "NU EXISTA" << endl;
    }
}