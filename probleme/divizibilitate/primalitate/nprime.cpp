#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int curent = 2;
    bool gasit = false;
    for (int i = 0; i < n; i++)
    {
        gasit = false;
        while (!gasit)
        {
            long long int sum = 0;
            long long int d = 1;
            while (d * d <= curent)
            {
                if (curent % d == 0)
                {
                    sum += d + curent / d;
                }
                d++;
            }
            if (curent + 1 == sum)
            {
                gasit = true;
                cout << curent << " ";
            }
            else
            {
                curent++;
            }
        }
        curent++;
    }
    cout << endl;
}

// n = 5
// out = 2 3 5 7 11