#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int sum = 0;
    while (n > 0)
    {
        sum += n;
        n /= 10;
    }
    cout << sum << "\n";
}