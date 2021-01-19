#include <iostream>

using namespace std;

int main()
{
    int k, nr_pare;
    nr_pare = 0;
    cin >> k;
    while (k != 0)
    {
        cin >> k;
        if (k % 2 == 0 && k != 0)
            nr_pare++;
    }

    if (nr_pare == 0)
    {
        cout << "NU EXISTA" << endl;
    }
    else
    {
        cout << nr_pare << endl;
    }
}