#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int S;

    S = (n * (n + 1) * (n + 2)) / 6;

    cout << "Rezultatul este " << S << "\n";
}