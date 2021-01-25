#include <iostream>

using namespace std;

int main()
{
    int n, min = 1000000;
    cin >> n;
    if (n != 0)
    {
        while (n != 0)
        {
            if (n < min && n > 0)
            {
                min = n;
            }
            cin >> n;
        }
        if (min == 1000000)
        {
            cout << "NU EXISTA" << endl;
        }
        else
        {
            cout << min << endl;
        }
    }
    else
    {
        cout << "NU EXISTA";
    }
}