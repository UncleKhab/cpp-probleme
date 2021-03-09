#include <iostream>

using namespace std;

int main()
{
    long int n, m, z[11];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int counter = 0;
        bool turn = false;
        bool up = false;
        bool down = false;
        while (m)
        {
            z[counter] = m % 10;
            counter++;
            m /= 10;
        }

        for (int j = 0; j < counter - 1; j++)
        {
            if (!turn)
            {
                if (z[j] < z[j + 1])
                    up = true;
                if (up && z[j] > z[j + 1])
                {
                    turn = true;
                    down = true;
                }
            }
            else
            {
                if (z[j] <= z[j + 1])
                    down = false;
            }
        }
        if (turn && up && down)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}