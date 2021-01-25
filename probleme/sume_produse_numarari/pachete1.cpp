#include <iostream>

using namespace std;

int main()
{
    int pachete, capacitate, nr_camioane = 1, pachet;
    cin >> pachete >> capacitate;
    int x = capacitate;
    for (int i = 0; i < pachete; i++)
    {
        cin >> pachet;
        if (x - pachet < 0)
        {
            nr_camioane++;
            x = capacitate - pachet;
        }
        else
        {
            x -= pachet;
        }
    }
    cout << nr_camioane << endl;
}