#include <iostream>

using namespace std;

int main()
{
    long long int n;
    int m = 0, count = 0;
    cin >> n;
    while (n > 0)
    {
        m += n % 10;
        n /= 10;
    }
    while (m > 0)
    {
        count++;
        m /= 10;
    }
    cout << count << "\n";
}