#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int p = 1, s = 0;

    for (int i = 1; i <= n; i++)
    {
        p *= i;
        s += p;
    }
    cout << "Rezultatul este " << s << endl;
    return 0;
}