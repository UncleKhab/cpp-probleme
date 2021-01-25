#include <iostream>

using namespace std;
int main()
{
    int n, sum_patrate, sum_impare, sum_div, sum_five, prod_nenul, sum_cif, ult_cifra = 0;
    cin >> n;
    sum_patrate = sum_impare = sum_div = sum_five = sum_cif = 0;
    prod_nenul = 1;
    sum_cif += n % 10;
    while (n > 0)
    {
        ult_cifra = n;
        int m = n % 10;
        sum_patrate += m * m;
        if (m % 2 != 0)
        {
            sum_impare += m;
        }
        if (m % 3 == 0)
        {
            sum_div += m;
        }
        if (m > 5)
        {
            sum_five++;
        }
        if (m != 0)
        {
            prod_nenul *= m;
        }

        n /= 10;
    }
    sum_cif += ult_cifra;

    cout << sum_patrate << " " << sum_impare << " " << sum_div << " " << sum_five << " " << prod_nenul << " " << sum_cif << "\n";
}