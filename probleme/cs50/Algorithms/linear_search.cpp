#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {4,
                     6,
                     8,
                     2,
                     7,
                     5,
                     0};
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            cout << "Found\n";
            return 0;
        }
    }
    cout << "Not Found\n";
    return 1;
}