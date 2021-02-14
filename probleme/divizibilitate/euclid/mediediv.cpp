#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 1, counter = 0;
    long long int sum = 0;
    float media;
    while (m * m <= n)
    {
        if (m * m == n)
        {
            counter++;
            sum += m;
        }
        else
        {
            if (n % m == 0)
            {
                counter += 2;
                sum += m + (n / m);
            }
        }
        m++;
    }
    media = sum / (counter * 1.0);
    cout << fixed << setprecision(2) << media << endl;
}