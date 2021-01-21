#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int m;
    cin >> n;
    m = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << "Rezultatul este " << m << "\n";
}