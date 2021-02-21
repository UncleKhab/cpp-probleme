#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m % 2 != 0)
        {
            cout << m << " ";
        }
        else
        {
            while (m % 2 == 0)
            {
                m /= 2;
            }
            cout << m << " ";
        }
    }
    std::cout << endl;
}