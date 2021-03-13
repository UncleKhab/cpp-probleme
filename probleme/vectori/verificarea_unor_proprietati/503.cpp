#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a;
    n--;
    bool alternativ = true;
    for (int i = 0; i < n && alternativ; i++)
    {
        cin >> b;
        if (a != 0 && b != 0)
            alternativ = false;
        a = b;
    }
    if (alternativ)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
}