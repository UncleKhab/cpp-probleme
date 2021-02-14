#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    int min = 0;

    for (int i = n; i > n / 2; i--)
    {
        int div = 1;
        int currentCounter = 0;
        while (div * div < i)
        {
            if (i % div == 0)
            {
                currentCounter += 2;
            }
            div++;
        }
        if (div * div == i)
        {
            currentCounter++;
        }
        if (currentCounter > counter)
        {
            counter = currentCounter;
            min = i;
        }
        if (currentCounter == counter)
        {
            min = i;
        }
    }
    cout << min << endl;
}