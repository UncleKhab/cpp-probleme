#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ord = true;
    int prevPar = -10000;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
        {
            if (temp >= prevPar)
                prevPar = temp;
            else
            {
                ord = false;
            }
        }
    }

    if (ord)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}