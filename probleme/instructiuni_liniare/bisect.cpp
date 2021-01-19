#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (!(n % 4))
        if (!(n % 100))
            if (!(n % 400))
                cout << "bisect" << endl;
            else
            {
                cout << "nebisect" << endl;
            }
        else
        {
            cout << "bisect" << endl;
        }
    else
    {
        cout << "nebisect" << endl;
    }
}