#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int S = 0, p;
    for (int i = 1; i <= n; i++)
    {
        p = 1;
        for (int j = 1; j <= i; j++)
        {
            p *= i;
        }
        S += p;
    }
    cout << "Rezultatul este " << S << endl;
}