#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("restmare.in");
ofstream fout("restmare.out");
int main()
{
    long long int n;
    fin >> n;
    long long int n_mid, sum;
    n_mid = n / 2;
    if (n < 3)
    {
        sum = 0;
    }
    else if (n % 2 == 0)
    {
        n_mid--;
        sum = n_mid * (n_mid + 1);
    }
    else
    {
        sum = n_mid * n_mid;
    }

    fout << sum << endl;
}