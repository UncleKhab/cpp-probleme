#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long int S;
    S = (n * (n + 1) * (2 * n + 1)) / 6 + (n * (n + 1)) / 2;
    cout << "Rezultatul este " << S << endl;
}