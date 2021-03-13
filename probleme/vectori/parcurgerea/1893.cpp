#include <iostream>

using namespace std;

int main()
{
    long long int n, m, z[12];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        //cout << "m = " << m << endl;
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

        for (int j = counter - 1; j > 0; j--)
        {
            if (j == counter - 1)
            {
                if (z[j] < z[j - 1])
                    up = true;
            }
            else if (z[j] == z[j - 1])
            {
                up = false;
                turn = false;
                down = false;
            }
            else
            {
                if (up && !turn)
                {
                    if (z[j] > z[j - 1])
                    {
                        turn = true;
                        down = true;
                    }
                }

                if (z[j] < z[j - 1])
                    down = false;
            }
            //cout << "j: " << j << " z[j] :" << z[j] << " " << endl;
        }
        cout << down << endl;
    }
}