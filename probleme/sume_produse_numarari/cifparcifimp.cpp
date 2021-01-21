#include <iostream>

using namespace std;

int main()
{
    long int n, m, c;
    long int pare = 0, impare = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        while (m > 0)
        {
            c = m % 10;
            if (c % 2 == 0)
            {
                pare++;
            }
            else
            {
                impare++;
            }

            m /= 10;
        }
    }
    cout << pare << " " << impare;
}