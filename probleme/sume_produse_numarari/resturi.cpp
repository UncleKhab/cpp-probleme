#include <iostream>

using namespace std;

int main()
{
    long long int n, k, sum_k, m;
    cin >> n >> k;
    sum_k = k * (k - 1) / 2;
    m = n / k;
    if (n % k == 0)
    {
        cout << m * sum_k << endl;
    }
    else
    {
        long long int z = n % k;
        long long int sum_z = z * (z + 1) / 2;
        cout << m * sum_k + sum_z << endl;
    }
}